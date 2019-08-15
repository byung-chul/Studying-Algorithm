#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int N, M;
	int tmp1, tmp2;
	int min6 = 1000;
	int min1 = 1000;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> tmp1 >> tmp2;
		min6 = min(min6, tmp1);
		min1 = min(min1, tmp2);
	}
	min6 = min(min6, min1 * 6);

	int ans = (N / 6)*min6 + min(min6, (N % 6)*min1);
	cout << ans;

	return 0;
}