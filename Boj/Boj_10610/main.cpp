#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool desc(int a, int b) {
	return a > b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	string N;
	cin >> N;
	int sum = 0;
	bool isZero = false;

	for (int i = 0; i < N.size(); i++) {
		sum += (N[i] - '0');
		if ((N[i] - '0') == 0) {
			isZero = true;
		}
	}
	if ((sum % 3 != 0) || !isZero) {
		cout << -1;
	}
	else {
		sort(N.begin(), N.end(), desc);
		cout << N;
	}
	
	return 0;
	
}