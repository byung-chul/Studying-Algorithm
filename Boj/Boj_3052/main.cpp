#include <iostream>

using namespace std;
int n[41];

int solve() {
	int count = 0;

	for (int i = 0; i < 42; i++) {
		if (n[i]) {
			count++;
		}
	}

	return count;

}
int main() {
	int x;

	for (int i = 0; i < 10; i++) {
		cin >> x;
		n[x % 42] = 1;
	}

	cout << solve() << endl;

	return 0;
}