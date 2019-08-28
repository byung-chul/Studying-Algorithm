#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int r, c;
vector <char> now;
char map[21][21];
bool check[21][21];
int cnt = 0;
bool is = false;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void dfs(int row, int col) {
	if (check[row][col]) {
		return;
	}
	
	check[row][col] = true;
	cnt++;
	now.push_back(map[row][col]);

	int nr, nc;
	for (int i = 0; i < 4; i++) {
		is = false;
		nr = row + dx[i];
		nc = col + dy[i];
		if (nr < 0 || r <= nr || nc < 0 || c <= nc) { continue; }
		for (int j = 0; (unsigned)j < now.size(); j++) {
			if (now[j] == map[nr][nc]) {
				is = true;
			}
		}
		if (!is) {
			dfs(nr, nc);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int temp = 0;
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			memset(check, 0, sizeof(check));

			dfs(i, j);
			if (temp < cnt) {
				temp = cnt;
			}
			cnt = 0;
		}
	}

	cout << temp;

	return 0;
}