#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int money;
	int cnt = 0;
	cin >> money;

	money = 1000 - money;

	if (money / 500 > 0) {
		cnt += (money / 500);
		money %= 500;
	}
	if (money / 100 > 0) {
		cnt += (money / 100);
		money %= 100;
	}
	if (money / 50 > 0) {
		cnt += (money / 50);
		money %= 50;
	}
	if (money / 10 > 0) {
		cnt += (money / 10);
		money %= 10;
	}
	if (money / 5 > 0) {
		cnt += (money / 5);
		money %= 5;
	}
	cnt += money;
	cout << cnt;


	return 0;
}