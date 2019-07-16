#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int dx[1] = { 1 };
	int dy[1] = { 1 };
	int board[11][11] = { 0 };

	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			cin >> board[i][j];
		}
	}

	int x = 2;
	int y = 2;
	board[x][y] = 9;
	while (1) {
		if ((board[x + dx[0]][y] == 1 && board[x][y + dy[0]])) {
			break;
		}
		if (board[x][y + dy[0]] == 2) {
			board[x][y + dy[0]] = 9;
			break;
		}
		if (board[x][y + dy[0]] == 0) {
			board[x][y + dy[0]] = 9;
			y++;
			continue;
		}
		if (board[x+dx[0]][y] == 2) {
			board[x + dx[0]][y] = 9;
			break;
		}
		if (board[x][y + dy[0]] == 1 && board[x+dx[0]][y] == 0) {
			board[x + dx[0]][y] = 9;
			x++;
			continue;
		}
	}

	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}