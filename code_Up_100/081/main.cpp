#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	for (int i = 1; i < n+1; i++) {
		for (int j = 1; j < m+1; j++) {
			cout << i << ' ' << j << endl;
		}
	}
	return 0;
}