#include <iostream>
#include <queue>

using namespace std;

int N, M;
int rx, ry, bx, by;

char map[11][11];
int disc[11][11][11][11];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int bfs() {
	queue<pair<pair<int, int>, pair<int, int>>> q;
	q.push({ {rx, ry},{bx, by} });
	disc[rx][ry][bx][by] = 1;
	int ret = 0;

	while (q.size()) {
		int qSize = q.size();
		
		while (qSize--) {
			int x = q.front().first.first;
			int y = q.front().first.second;
			int z = q.front().second.first;
			int w = q.front().second.second;

			q.pop();
			
			if (map[x][y] == 'O' && map[x][y] != map[z][w]) {
				return ret;
			}
			for (int i = 0; i < 4; i++) {
				int nx = x;
				int ny = y;
				int nz = z;
				int nw = w;

				while (map[nx][ny] != '0' && map[nx + dx[i]][ny + dy[i]] != '#') {
					nx += dx[i];
					ny += dy[i];
				}
				while (map[nz][nw] != '0' && map[nz + dx[i]][nw + dy[i]] != '#') {
					nz += dx[i];
					nw += dy[i];
				}

				if (nx == nz && ny == nw) {
					if (map[nx][ny] == 'O') {
						continue;
					}
					if (abs(nx - x) + abs(ny - y) < abs(nz - z) + abs(nw - w)) {
						nz -= dx[i];
						nw -= dy[i];
					}
					else {
						nx -= dx[i];
						ny -= dy[i];
					}
				}

				if (disc[nx][ny][nz][nw]) {
					continue;
				}
				q.push({ {nx, ny},{nz, nw} });
				disc[nx][ny][nz][nw] = 1;
			}
		}
		if (ret == 10) {
			return -1;
		}
		ret++;
	}

	return -1;
}

int main() {

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];

			if (map[i][j] == 'R') {
				rx = i;
				ry = j;
			}
			if (map[i][j] == 'B') {
				bx = i;
				by = j;
			}
		}
	}

	cout << bfs();

	return 0;
}