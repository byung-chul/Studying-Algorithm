#include <iostream>
//선택정렬은 가장 작은 것을 찾아서 가장 왼쪽으로 놓는다.
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int i, j, min, index, temp;
	int ary[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

	for (i = 0; i < 10; i++) {
		min = 99999;
		for (j = i; j < 10; j++) {
			if (min > ary[j]) {
				min = ary[j];
				index = j;
			}
		}
		temp = ary[i];
		ary[i] = ary[index];
		ary[index] = temp;
	}

	for (int i = 0; i < 10; i++) {
		cout << ary[i] << " ";
	}
	return 0;
}