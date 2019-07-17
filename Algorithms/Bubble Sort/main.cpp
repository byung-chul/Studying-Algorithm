#include <iostream>
//버블정렬은 바로 옆의 항목과 비교하여 작은 것 왼쪽(가장 큰것 먼저 고정된다.)
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int temp;
	int arr[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp; 
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}