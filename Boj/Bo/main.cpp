#include <iostream>

using namespace std;

int cnt[10001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int number;
	int a;

	cin >> number;

	for (int i = 0; i < number; i++) {
		cin >> a;
		cnt[a]++;
	}

	for (int i = 0; i < 10001; i++) {
		while (cnt[i] != 0)
		{
			cout << i << '\n';
			cnt[i]--;
		}
	}
	return 0;
}