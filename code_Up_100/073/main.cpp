#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	while (1) {
		cin >> a;
		if (a == 0) {
			cout << a;
			break;
		}
		cout << a << endl;
	}
	return 0;

}