#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	int sum = 0;
	cin >> a;

	for (int i = 1; i < a + 1; i++) {
		sum += i;
		if (sum >= a) {
			cout << sum;
			break;
		}
	}
	return 0;
}