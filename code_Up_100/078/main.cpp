#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a;
	
	cin >> a;

	int ans = 0;

	for (int i = 1; i < a + 1; i++) {
		if (i % 2 == 0) {
			ans += i;
		}
	}

	cout << ans;

	return 0;
}