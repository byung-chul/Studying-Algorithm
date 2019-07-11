#include <iostream>

using namespace std;

int result[11] = { 0,1,2,4 };

int solve(int num) {
	if (result[num]) {
		return result[num];
	}
	else {
		return solve(num - 1) + solve(num - 2) + solve(num - 3);
	}
}
int main() {

	int test;
	int num;

	cin >> test;

	for (int i = 0; i < test; i++) {
		num = 0;

		cin >> num;

		cout << solve(num) << endl;
	}

	return 0;
}