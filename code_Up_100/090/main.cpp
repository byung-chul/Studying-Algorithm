#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, r, n;
	cin >> a >> r >> n;

	for (int i = 1; i < n; i++) {
		a *= r;
	}
	cout << a;

	return 0;
}