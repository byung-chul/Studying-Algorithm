#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double a;
	cin >> a;
	cout.precision(11);
	cout << fixed << a;

	return 0;
}