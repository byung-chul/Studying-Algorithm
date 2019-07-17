#include <iostream>
// 삽입정렬은 적절한 위치를 찾아 들어가기
// 버블정렬과 비슷하지만 멈출 지점을 알고 있어서 효율적이다.
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
	int temp;

	for (int i = 0; i < 9; i++) {
		int j = i;
		while (arr[j] > arr[j + 1]) {
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}