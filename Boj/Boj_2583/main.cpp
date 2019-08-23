#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int m, n;
int cnt = 0;
int map[101][101];
bool check[101][101];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
vector<int> v;

void dfs(int row, int col) {
	if (check[row][col]) {
		return;
	}
	int nr, nc;
	check[row][col] = true;
	cnt++;
	for (int i = 0; i < 4; i++) {
		nr = row + dx[i];
		nc = col + dy[i];

		if (0 <= nr && nr < m && 0 <= nc && nc < n && map[nr][nc] == 0) {
			dfs(nr, nc);
		}
	}
	
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int k;
	int lx, ly, rx, ry;

	cin >> m >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> lx >> ly >> rx >> ry;
		for (int a = ly; a < ry; a++) {
			for (int b = lx; b < rx; b++) {
				map[a][b] = 1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (!check[i][j] && map[i][j] == 0) {
				dfs(i, j);
				v.push_back(cnt);
				cnt = 0;
			}
		}
	}

	sort(v.begin(), v.end());
	cout << v.size() << "\n";

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	return 0;
}