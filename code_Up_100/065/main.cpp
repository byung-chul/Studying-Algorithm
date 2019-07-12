#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	if (a % 2 == 0) {
		cout << a << endl;
	}
	if (b % 2 == 0) {
		cout << b << endl;
	}
	if (c % 2 == 0) {
		cout << c << endl;
	}
	return 0;
}