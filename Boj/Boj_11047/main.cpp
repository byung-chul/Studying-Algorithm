#include <iostream>

using namespace std;
int type[10];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int N, K;
	int cnt = 0;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> type[i];
	}

	for (int i = N-1; i >= 0; i--) {
		
		if (K / type[i] != 0) {
			cnt += (K / type[i]);
			K %= type[i];
		}
	}

	cout << cnt;

	return 0;
}