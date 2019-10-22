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

#include <iostream>
#include <vector>
#include <map>
	using namespace std;

	typedef map<int, int> mii;

	// �ι� �������� ���� ���� ã�´�.
	int find(mii& dat) {
		for (auto& a : dat) {
			if (a.second != 2) {
				return a.first;
			}
		}
		// ��� ���� ���� ����.
		return -1;
	}

	vector<int> solution(vector<vector<int> > v) {
		mii x, y;
		for (int i = 0; i < 3; ++i) {
			x[v[i][0]]++;
			y[v[i][1]]++;
		}

		vector<int> ans(2);
		ans[0] = find(x);
		ans[1] = find(y);
		return ans;
	}

	return 0;
}