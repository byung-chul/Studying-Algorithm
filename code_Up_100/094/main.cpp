#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x;
	vector <int> a;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}

	for (int i = n-1; i > -1; i--) {
		cout << a[i] << " ";
	}

	return 0;
}