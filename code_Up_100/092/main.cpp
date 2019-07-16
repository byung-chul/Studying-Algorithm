#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 2; i < 10000000; i++) {
		if (i%a == 0 && i%b == 0 && i%c == 0) {
			cout << i;
			break;
		}
	}

	return 0;
}