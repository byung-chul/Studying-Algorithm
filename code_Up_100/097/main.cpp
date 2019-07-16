#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int board[19][19] = { 0 };
	int n, x, y;

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cin >> board[i][j];
		}
	}

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = 0; j < 19; j++) {
			board[x-1][j] = !board[x-1][j];
		}
		for (int j = 0; j < 19; j++) {
			board[j][y-1] = !board[j][y-1];
		}
	}

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}