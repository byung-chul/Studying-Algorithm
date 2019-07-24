#include <iostream>

using namespace std;

int number = 9;
int heap[9] = { 5, 8, 9, 3, 3, 6, 2, 1, 7 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// Ʈ�������� �ִ� �� ������ �ٲ۴�.
	for (int i = 1; i < number; i++) {
		int c = i;
		do {
			int root = (c - 1) / 2;
			if (heap[root] < heap[c]) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while (c != 0);
	}

	for (int i = number - 1; i >= 0; i--) {
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;

		int root = 0;
		int c = 1;
		do {
			c = 2 * root + 1;
			if (heap[c] < heap[c + 1] && c < i - 1) {
				c++;
			}
			if (heap[root] < heap[c] && c < i) {
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;

		} while (c < i);
	}
	//ũ�⸦ �ٿ����� �ݺ������� �� ����
	
	for (int i = 0; i < number; i++) {
		cout << heap[i] << ' ';
	}
	return 0;
}