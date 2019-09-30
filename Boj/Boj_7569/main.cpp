#include <iostream>
#include <queue>

using namespace std;

int map[101][101][101];
bool check[101][101][101];

struct tomato {
	int x, y, z;
};
queue <tomato> q;
int M, N, H;
int dx[6] = { -1,1,0,0,0,0 };
int dy[6] = { 0,0,-1,1,0,0 };
int dz[6] = { 0,0,0,0,-1,1 };

void bfs() {
	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		int z = q.front().z;
		q.pop();

		for (int i = 0; i < 6; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			int nz = z + dz[i];

			if (nx < 0 || ny < 0 || nz < 0 || nx >= H || ny >= N || nz >= M) {
				continue;
			}
			if (map[nx][ny][nz]) {
				continue;
			}
			map[nx][ny][nz] = map[x][y][z] + 1;
			q.push({ nx, ny, nz });

		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	cin >> M >> N >> H;

	int ans = 0;

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				cin >> map[i][j][k];
				if (map[i][j][k] == 1) {
					q.push({ i,j,k });
				}
			}
		}
	}

	bfs();
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (map[i][j][k] == 0) {
					cout << -1;
					return 0;
				}
				if (ans < map[i][j][k]) {
					ans = map[i][j][k];
				}
			}
		}
	}

	cout << ans - 1;

	return 0;

}