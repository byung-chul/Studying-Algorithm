#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n, m;
string a;
int cnt = 0;
int map[101][101];
bool check[101][101];

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int bfs() {
	queue<pair<pair<int, int>, int>> q;
	q.push(make_pair(make_pair(0, 0), 1));
	check[0][0] = true;

	while (!q.empty()) {
		int x = q.front().first.first;
		int y = q.front().first.second;
		int z = q.front().second;

		q.pop();

		if (x == n - 1 && y == m - 1) { return z; }
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || n <= nx || ny < 0 || m <= ny) {
				continue;
			}
			if (check[nx][ny]) {
				continue;
			}
			if (!map[nx][ny]) {
				continue;
			}

			q.push(make_pair(make_pair(nx, ny), z + 1));
			check[nx][ny] = true;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 0; j < m; j++) {
			map[i][j] = a[j] - '0';
		}
	}

	cout << bfs();
	return 0;
}