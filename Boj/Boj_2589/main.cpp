#include <iostream>
#include <queue>
using namespace std;

int N, M;
char map[51][51];
bool check[51][51];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int ans;
queue <pair<int, int>> q;

void bfs(int x, int y) {
	int path = 0;
	memset(check, 0, sizeof(check));

	q.push(make_pair(x, y));
	check[x][y] = true;

	while (!q.empty()) {
		int qSize = q.size();
		for (int i = 0; i < qSize; i++) {
			int x = q.front().first;
			int y = q.front().second;
			q.pop();

			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];

				if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
					continue;
				}
				if (map[nx][ny] == 'L' && !check[nx][ny]) {
					q.push(make_pair(nx, ny));
					check[nx][ny] = true;
				}
			}
		}
		path++;
	}

	if (path-1 > ans) {
		ans = path - 1;
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	int tmp = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 'L') {
				bfs(i, j);
			}
		}
	}

	cout << ans;
	return 0;
}