#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	cin >> a;

	switch (a) {
	case 12:
	case 1:
	case 2:
		cout << "winter";
		break;
	case 3:
	case 4:
	case 5:
		cout << "spring";
		break;
	case 6:
	case 7:
	case 8:
		cout << "summer";
		break;
	case 9:
	case 10:
	case 11:
		cout << "fall";
		break;
	}
	return 0;
}