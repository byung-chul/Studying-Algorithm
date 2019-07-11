#include <iostream>

using namespace std;

int a[100] = { 0 };

int solve() {

	int count = 0;
	bool check;

	for (int i = 0; i < 100; i++) {
		check = true;
		if (a[i] == 1) {
			check = false;
		}
		if (a[i] == 0) {
			return count;
		}
		for (int j = 2; j < a[i]; j++) {


			if (a[i] % j == 0) {
				check = false;
				break;
			}

		}
		if (check) { count++; }
	}
}
int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << solve() << endl;
}