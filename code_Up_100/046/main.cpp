#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	
	cin >> a >> b >> c;
	cout << a + b + c << endl;
	cout.precision(1);
	cout << fixed << ((float)(a + b + c)) / 3;

	return 0;

}