#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char a;
	cin >> a;

	for (char i = 'a'; i < a + 1; i++) {
		cout << i << " ";
	}
	return 0;
}