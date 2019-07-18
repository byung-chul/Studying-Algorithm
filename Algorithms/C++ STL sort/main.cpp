#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int a[10] = { 7, 6, 5,4 , 7, 8, 2, 4, 7, 4 };

	sort(a, a + 10, compare);

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}