#include <iostream>

using namespace std;

int check(int a) {
	int count = 0;
	while (true) {
		int number = a % 10;

		if (number == 3 || number == 6 || number == 9) {
			count++;
		}
		a /= 10;

		if (a == 0) {
			break;
		}
	}
	return count;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int num;
	cin >> num;

	for (int i = 1; i < num+1; i++) {
		int count = check(i);
		if (count == 0) {
			cout << i << " ";
			continue;
		}
		for (int j = 0; j < count; j++) {
			cout << "-";
		}
		cout << " ";
	}
	return 0;

}