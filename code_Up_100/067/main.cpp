#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	cin >> a;

	if (a < 0) {
		cout << "minus" << endl;
	}
	else {
		cout << "plus" << endl;
	}
	if (a % 2) {
		cout << "odd" << endl;
	}
	else {
		cout << "even" << endl;
	}

	return 0;
}