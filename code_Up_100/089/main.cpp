#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, d, n;

	cin >> a >> d >> n;

	cout << a + (d*(n - 1));

	return 0;
}