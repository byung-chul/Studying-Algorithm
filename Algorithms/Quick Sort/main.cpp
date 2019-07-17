#include <iostream>
//특정한 값(pivot)을 기준으로 나누자
using namespace std;

int number = 10;

int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };

void quickSort(int *data, int start, int end) {
	if (start >= end) {
		return;
	}

	int pivot = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {
		while (arr[i] <= arr[pivot]) {
			i++;
		}
		while (arr[j] >= arr[pivot] && j > start) {
			j--;
		}
		if (i > j) {
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else {
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}

	quickSort(arr, start, j - 1);
	quickSort(arr, j + 1, end);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	quickSort(arr, 0, number - 1);
	
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
	
}