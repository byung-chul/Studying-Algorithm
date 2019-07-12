#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a[3];

	for (int i = 0; i < sizeof(a)/sizeof(int); i++) {
		cin >> a[i];
	}

	for (int i = 0; i < sizeof(a) / sizeof(int); i++) {
		if (a[i] % 2) {
			cout << "odd" << endl;
			continue;
		}
		cout << "even" << endl;
	}
	
	return 0;
}