//Boj_1094 ¸·´ë±â
#include <iostream>

using namespace std;

int X;
int i = 64;

int solve(int x) {
	int sum = 0;
	int count = 0;
	
	while (x != 0) {
		if (x < i) {
			i = i / 2;
		}
		else {
			count += (x / i);
			x -= i;
		}
	}

	return count;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> X;

	cout << solve(X) << endl;
	return 0;
}