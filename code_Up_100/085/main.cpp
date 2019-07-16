#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int h, b, c, s;

	cin >> h >> b >> c >> s;

	cout.precision(1);
	cout << fixed << (float)(h*b*c*s) / (8 * 1024 * 1024) << " MB";

	return 0;
}