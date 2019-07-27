#include <iostream>
//범위가 주어질 때, 그 값이 몇번 들어가있는지 확인 후 그만큼 출력
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a[101];
	int number;
	int cnt[11] = { 0 };

	cin >> number;

	for (int i = 0; i < number; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}

	for (int i = 1; i < 11; i++) {
		if (cnt[i] != 0) {
			for (int j = 0; j < cnt[i]; j++) {
				cout << i;
			}
		}
	}
	return 0;
}