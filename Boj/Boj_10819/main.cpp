// Boj 10819 차이를 최대로
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int n;
	int sub;
	int result;
	int subMax = 0 ;

	cin >> n;

	vector <int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	do {
		sub = 0;
		result = 0;
		for (int i = 0; i < n - 1; i++) {
			sub = arr[i] - arr[i + 1];
			if (sub < 0) {
				sub *= -1;
			}
			result += sub;
		}
		subMax = max(result, subMax);

	} while (next_permutation(arr.begin(), arr.end()));

	cout << subMax << endl;
	return 0;
}