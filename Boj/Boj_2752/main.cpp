#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[4];
	int number = 3;
	int min, temp, index;

	for (int i = 0; i < number; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < number; i++) {
		min = 1000001;
		for (int j = i; j < number; j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
	
	for (int i = 0; i < number; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}