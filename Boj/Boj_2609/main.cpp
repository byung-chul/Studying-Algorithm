#include <iostream>

using namespace std;

int n, m;

int solve1(int n, int m) {
	int s = 1;

	for (int i = 2; i < 10001; i++) {
		if ((n % i == 0) && (m%i == 0)) {
			s = i;
		}
	}

	return s;
}
int solve2(int n, int m, int x) {
	return n * m / x;
}
int main() {

	cin >> n >> m;

	if (n < m) {
		int temp;
		temp = n;
		n = m;
		m = temp;
	}
	cout << solve1(n, m) << endl;
	cout << solve2(n, m, solve1(n, m)) << endl;
	return 0;
}