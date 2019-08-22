#include <iostream>

using namespace std;

int group[14];
int temp[6];
int n;
void dfs(int start, int cnt) {
	if (cnt == 6) {
		for (int i = 0; i < 6; i++) {
			cout << temp[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = start; i < n; i++) {
		temp[cnt] = group[i];
		dfs(i + 1, cnt + 1);
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);
	while (cin >> n && n) {
		for (int i = 0; i < n; i++) {
			cin >> group[i];
		}
		dfs(0, 0);
		cout << '\n';
	}

	return 0;
}