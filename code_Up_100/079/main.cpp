#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	char a;
	while (1) {
		cin >> a;
		cout << a << endl;
		if (a == 'q') {
			break;
		}
	}
	
	return 0;
}