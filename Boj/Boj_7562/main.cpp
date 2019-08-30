#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int check[301][301];
int n;
int row, col;
int dr, dc;
int dx[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int dy[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };

void bfs() {
	queue<pair<int, int>> q;
	q.push(make_pair(row, col));

	while (!q.empty()) {

			int nowrow = q.front().first;
			int nowcol = q.front().second;
			q.pop();

			if (nowrow == dr && nowcol == dc) {
				cout << check[nowrow][nowcol] << '\n';
				return;
			}

			for (int i = 0; i < 8; i++) {
				int nr = nowrow + dx[i];
				int nc = nowcol + dy[i];

				if (nr < 0 || nr >= n || nc < 0 || nc >= n) {
					continue;
				}
				if (check[nr][nc]) {
					continue;
				}
				check[nr][nc] = check[nowrow][nowcol]+1;
				q.push(make_pair(nr, nc));
			}
		}
	}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int testcase;
	cin >> testcase;

	while (testcase > 0) {
		memset(check, 0, sizeof(check));
		cin >> n;
		cin >> row >> col;
		cin >> dr >> dc;

		bfs();
		testcase--;
	}

	return 0;
}