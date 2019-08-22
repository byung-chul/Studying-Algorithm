#include <iostream>

using namespace std;

int n, m;
int cnt = 0;
int map[51][51];
bool check[51][51] = { false };
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int row, int col) {
	if (check[row][col]) {
		return;
	}
	int nr, nc;
	check[row][col] = true;

	for (int i = 0; i < 4; i++) {
		nr = row + dx[i];
		nc = col + dy[i];

		if (0 <= nr && nr < n && 0 <= nc && nc < m && map[nr][nc] == 1) {
			dfs(nr, nc);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int testcase;
	cin >> testcase;

	int k;
	int cnt = 0;
	int tmp1, tmp2;

	while (testcase > 0) {

		cin >> n >> m >> k;

		cnt = 0;
		memset(map, 0, sizeof(map));
		memset(check, false, sizeof(check));
		for (int i = 0; i < k; i++) {
			cin >> tmp1 >> tmp2;
			map[tmp1][tmp2] = 1;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!check[i][j] && map[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << '\n';
		testcase--;
	}

	return 0;
}