#include <iostream>

using namespace std;

int crank[4][8];
void clock(int* a) {
	int temp = a[7];
	for (int i = 0; i < 7; i++) {
		a[i + 1] = a[i];
	}
	a[0] = temp;
}
void c_clock(int* a) {
	int temp = a[0];
	for (int i = 0; i < 7; i++) {
		a[i] = a[i+1];
	}
	a[7] = temp;
}
int solve(int k) {
	int ans;

	for (int i = 0; i < k; i++) {
		int dir, num;

		cin >> num, dir;

		
		}
	}

	return ans;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char input[8];

	for (int i = 0; i < 4; i++) {
		cin >> input;

		for (int j = 0; j < 8; j++) {
			crank[i][j] = input[j]-'0';
		}
	}

	int K;
	cin >> K;

	cout << solve(K);
}