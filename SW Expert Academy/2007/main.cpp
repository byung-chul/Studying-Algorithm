#include <iostream>

using namespace std;

char str[31];

int solve() {
	for (int size = 2; size < 11; size++) {
		bool check = true;
		for (int i = 0; i < size; i++) {
			if (str[i] != str[size + i]) {
				check = false;
			}
		}
		if (check) {
			return size;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int test;
	for (int i = 0; i < test; i++) {
		cin >> str;

		cout << "#" << i + 1 << " " << solve() << endl;
	}
}