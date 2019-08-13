#include <iostream>
#include <algorithm>

using namespace std;

int loop[100000];
bool desc(int a, int b) {
	return a > b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int N;
	int weight = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> loop[i];
	}

	sort(loop, loop + N, desc);
	for (int i = 0; i < N; i++) {
		if (weight < loop[i] *( i + 1)) {
			weight = loop[i] * (i+1);
		}
	}
	cout << weight;

	return 0;
}