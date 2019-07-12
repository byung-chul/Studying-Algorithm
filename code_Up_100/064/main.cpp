#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	cout << ((a<b?a:b) < c ? (a < b ? a : b) : c) ;
	return 0;
}