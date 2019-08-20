#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> house;
char map[25][25];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int dfs(int row, int col) {
	map[row][col] = '0';

	int ret = 1, nr, nc;
	for (int i = 0; i < 4; i++) {
		nr = row + dx[i];
		nc = col + dy[i];

		if (0 <= nr && nr < n && 0 <= nc && nc < n && map[nr][nc] == '1')
			ret += dfs(nr, nc);
	}
	return ret;
}
int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == '1') {
				house.push_back(dfs(i, j));
			}
		}
	}

	sort(house.begin(), house.end());
	cout << house.size() << "\n";
	for (int i = 0; i < house.size(); i++) {
		cout << house.at(i) << "\n";
	}

	return 0;
}