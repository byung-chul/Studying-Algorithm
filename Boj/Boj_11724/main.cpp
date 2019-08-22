#include <iostream>
#include <vector>

using namespace std;
int check[1001];
vector<int> v[1001];


void dfs(int x) {
	if (check[x]) { return; }
	check[x] = true;

	for (int i = 0; i < v[x].size(); i++) {
		if (!check[v[x][i]]) {
			dfs(v[x][i]);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int n, m;
	int tmp1, tmp2;
	int ans = 0;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> tmp1 >> tmp2;
		v[tmp1].push_back(tmp2);
		v[tmp2].push_back(tmp1);
	}

	for (int i = 1; i < n + 1; i++) {
		if (!check[i]) {
			dfs(i);
			ans++;
		}
	}
	cout << ans << "\n";

	return 0;
}