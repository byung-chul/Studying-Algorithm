#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int N, M, K;
	cin >> N >> M >> K;
	int team = 0;

	team = min({ N / 2, M, (N + M - K) / 3 });

	cout << team;

	return 0;
}