#include <iostream>
#include <cstring>

using namespace std;

bool check[101][101];
int map[101][101];
int n;
int height;
int cnt = 0;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int ans[101];
void dfs(int row, int col) {
	if (check[row][col]) { return; }

	check[row][col] = true;
	int nr, nc;
	for (int i = 0; i < 4; i++) {
		
		nr = row + dx[i];
		nc = col + dy[i];

		if (nr < 0 || n <= nr || nc < 0 || n <= nc) {
			continue;
		}
		if (map[nr][nc] > height) {
			dfs(nr, nc);
		}
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int max = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	for (height = 0; height < 101; height++) {
		memset(check, false, sizeof(check));

		for (int a = 0; a < n; a++) {
			for (int b = 0; b < n; b++) {

				if (!check[a][b] && map[a][b] > height) {
					dfs(a, b);
					cnt++;
				}
			}
		}
		ans[height] = cnt;
		cnt = 0;
	}

	for (int i = 0; i < 101; i++) {
		if (ans[i] > max) {
			max = ans[i];
		}
	}

	cout << max;
	return 0;
}