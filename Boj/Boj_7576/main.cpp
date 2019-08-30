#include <iostream>
#include <queue>
using namespace std;

int m, n;
int map[1001][1001];
bool check[1001][1001];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
queue <pair<int, int>> tomato;

void bfs() {
	while (!tomato.empty()) {
		int row = tomato.front().first;
		int col = tomato.front().second;

		tomato.pop();
		for (int i = 0; i < 4; i++) {
			int nr = row + dx[i];
			int nc = col + dy[i];

			if (nr < 0 || nr >= n || nc < 0 || nc >= m) {
				continue;
			}

			if (map[nr][nc]) { continue; }
			map[nr][nc] = map[row][col] + 1;
			tomato.push(make_pair(nr, nc));
		}
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	int ans = 0;

	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) {
				tomato.push(make_pair(i, j));
			}
		}
	}

	bfs();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (map[i][j] == 0) {
				cout << -1;
				return 0;
			}
			if (ans < map[i][j]) {
				ans = map[i][j];
			}
		}
	}

	cout << ans-1;
	return 0;
}