#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	int sum = 0;

	cin >> a;

	for (int i = 0; i < a+1; i++) {
		sum += i;
		if (sum >= a) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}