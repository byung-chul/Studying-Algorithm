#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a[24] = { 0 };
	int n, x;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a[x]++;
	}

	for (int i = 1; i < 24; i++) {
		cout << a[i] << " ";
	}

	return 0;

}