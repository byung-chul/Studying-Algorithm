#include <iostream>
#include <vector>

using namespace std;

int number;
int edge;
int cnt = 0;
int check[101];
vector<int> network[101];

void dfs(int x) {
	if (check[x]) {
		return;
	}
	check[x] = true;
	cnt++;

	for (int i = 0; i < network[x].size(); i++) {
		int y = network[x][i];
		dfs(y);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> number;
	cin >> edge;

	for (int i = 0; i < edge; i++) {
		int a, b;
		cin >> a >> b;
		network[a].push_back(b);
		network[b].push_back(a);
	}

	dfs(1);

	cout << cnt-1 << endl;
	return 0;
}