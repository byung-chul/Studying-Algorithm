#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
char map[101][101];
bool check[101][101];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int row, int col) {

	if (check[row][col]) { return; }

	int nr, nc;
	
	check[row][col] = true;
	for (int i = 0; i < 4; i++) {
		nr = row + dx[i];
		nc = col + dy[i];

		if (0 <= nr && nr < n && 0 <= nc && nc < n && map[nr][nc] == map[row][col]) {
			dfs(nr, nc);
		}
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	cin >> n;
	int cnt = 0;;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (check[i][j]) {
				continue;
			}
			dfs(i,j);
			cnt++;
		}
	}
	cout << cnt << " ";

	cnt = 0;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			check[i][j] = false;
	
			if (map[i][j] == 'R') {
				map[i][j] = 'G';
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (check[i][j]) {
				continue;
			}
			dfs(i, j);
			cnt++;
		}
	}
	cout << cnt;

	return 0;
	
}