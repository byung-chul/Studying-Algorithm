#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	cin >> a;

	if (90 <= a) {
		cout << "A";
	}
	else if (70 <= a) {
		cout << "B";
	}
	else if (40 <= a) {
		cout << "C";
	}
	else {
		cout << "D";
	}

	return 0;
}