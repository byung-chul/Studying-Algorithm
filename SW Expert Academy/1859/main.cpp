#include <iostream>

using namespace std;
int day[1000002] = { 0, };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	long long ans = 0;
	int test;
	cin >> test;

	for (int i = 0; i < test; i++) {
		int n;

		for (int j = 0; j < n; j++) {
			cin >> day[j];
		}

		int max = day[n - 1];

		for (int j = n - 1; j >= 0; j--) {
			if (max >= day[j]) {
				ans += max - day[j];
			}
			else {
				max = day[j];
			}
		}

		cout << "#" << i + 1 << " " << ans << endl;

		for (int j = 0; j < n; j++) {
			day[j] = 0;
		}
	}

	return 0;
}