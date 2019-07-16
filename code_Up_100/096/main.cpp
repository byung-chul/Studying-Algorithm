#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int board[19][19] = { 0 };
	int n, x, y;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		board[x-1][y-1] = 1;
	}

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}