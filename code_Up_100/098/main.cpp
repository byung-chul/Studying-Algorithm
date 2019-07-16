#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int board[101][101] = { 0 };
	int n, x, y, w, h, l, d;

	cin >> h >> w;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> l >> d >> x >> y;
		board[x - 1][y - 1] = 1;
		if (!d) {
			for (int j = 1; j < l; j++) {
				board[x - 1][y - 1 + j] = 1;
			}
		}
		else {
			for (int j = 1; j < l; j++) {
				board[x - 1 + j][y - 1] = 1;
			}
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}