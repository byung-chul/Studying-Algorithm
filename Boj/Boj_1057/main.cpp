//Boj_1057 토너먼트
#include <iostream>

using namespace std;

int N;
int jimin, hansu;

int solve() {
	int ans = 1;

	while (N) {
		if ((jimin + 1) / 2 == (hansu + 1) / 2) break;
		jimin = (jimin + 1) / 2;
		hansu = (hansu + 1) / 2;
		ans++;
		N /= 2;
	}
	if (!N) {
		return -1;
	}
	return ans;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> jimin >> hansu;

	cout << solve() << endl;

	return 0;
}