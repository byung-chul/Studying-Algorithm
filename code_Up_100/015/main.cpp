#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	float a;

	cin >> a;

	cout << fixed;
	cout.precision(2);
	cout << a;
	return 0;
}