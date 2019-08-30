#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
int n;
bool check[101];
int member[101];

vector<int> anslist;
void dfs(int x, int mx) {
	if (x == mx) {
		for (int i = 1; i < n + 1; i++) {
			if (check[i]) {
				anslist.push_back(i);
				member[i] = 0;
			}
		}
		return;
	}

	if (check[x] || member[x] == 0) {
		return;
	}

	check[x] = true;
	dfs(member[x], mx);
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	cin >> n;
	for (int i = 1; i < n+1; i++) {
		cin >> member[i];
	}

	for (int i = 1; i < n+1; i++) {
		if (member[i] == 0) {
			continue;
		}

		if (member[i] == i) {
			anslist.push_back(i);
			continue;
		}

		memset(check, 0, sizeof(check));
		check[i] = true;
		dfs(member[i], i);
	}

	sort(anslist.begin(), anslist.end());
	cout << anslist.size() << "\n";

	for (int i = 0; i < anslist.size(); i++) {
		cout << anslist[i] << "\n";
	}
	return 0;
}