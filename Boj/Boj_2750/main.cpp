#include <iostream>

using namespace std; 

int arr[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int number, min, index, temp;
	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < number; i++){
		min = 1001;
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
		cout << arr[i] << endl;
	}
	return 0;
}