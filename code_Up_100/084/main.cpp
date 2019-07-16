#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int r, g, b;

	cin >> r >> g >> b;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < g; j++) {
			for (int k = 0; k < b; k++) {
				cout << i << ' ' << j << ' ' << k << endl;
			}
		}
	}
	cout << r*g*b;
	return 0;
}