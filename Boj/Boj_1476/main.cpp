#include <iostream>

using namespace std;

int e, s, m;

int solve(int e, int s, int m) {
	int i = 1;
	while (true) {
		if (((i - e) % 15 == 0) && ((i - s) % 28 == 0) && ((i - m) % 19 == 0)) {
			return i;
			break;
		}
		i++;
	}
}

int main() {

	cin >> e >> s >> m;

	cout << solve(e, s, m) << endl;

	return 0;
}