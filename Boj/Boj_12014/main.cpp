#include <iostream>

using namespace std;

int main() {

	int testcase;
	int n, k;

	cin >> testcase;

	for (int i = 0; i < testcase; i++) {
		int arr[10000] = {0};
		int dp[10000] = {0};

		dp[0] = 1;
		int max = 0;
		cin >> n >> k;

		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}

		for (int a = 1; a < n; a++) {
			dp[a] = 1;
			for (int b = 0; b < a; b++) {
				if (arr[a] > arr[b] && dp[a] < dp[b]+1) {
					dp[a] = dp[b] + 1;
				}
			}
			if (dp[a] > max) {
				max = dp[a];
			}
		}

		cout << "Case #" << i + 1 << "\n";
		if (max >= k) {
			cout << 1 << '\n';
		}
		else {
			cout << 0 << '\n';
		}
	}

	return 0;
}