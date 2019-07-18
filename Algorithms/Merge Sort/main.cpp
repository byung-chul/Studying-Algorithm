#include <iostream>
//������ �� �ɰ��� ���߿� ��ġ��
using namespace std;

int number = 8;
int sorted[8];
int count = 0;

void merge(int a[], int m, int middle, int n){
	
	int i = m;
	int j = middle + 1;
	int k = m;

	while (i <= middle && j <= n) {
		if (a[i] < a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;		
	}
	if (i > middle) {
		for (int s = j; s <= n; s++) {
			sorted[k] = a[s];
			k++;
		}
	}
	else {
		for (int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	}

	for (int t = m; t <= n; t++) {
		a[t] = sorted[t];
	}
}
void mergeSort(int a[], int start, int end) {
	//ũ�Ⱑ 1���� ū ���
	if (start < end) {
		int middle = (start + end) / 2;
		mergeSort(a, start, middle);
		mergeSort(a, middle + 1, end);
		merge(a, start, middle, end);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[8] = { 6, 12,5, 6, 823, 4314, 232, 3 };

	mergeSort(arr, 0, number - 1);
	
	for (int i = 0; i < number; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}