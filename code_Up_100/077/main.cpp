#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	cin >> a;
	for (int i = 0; i < a+1; i++) {
		cout << i << endl;
	}

	return 0;
}