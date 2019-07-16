#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int ans = 23;
	int n, x;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (ans > x) {
			ans = x;
		}
	}

	cout << ans;
	return 0;
}