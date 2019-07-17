#include <iostream>
#include <algorithm>

using namespace std;

int number;
int arr[1000001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + number);
	for (int i = 0; i < number; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}