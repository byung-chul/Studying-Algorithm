//Boj_14499 주사위 굴리기
#include <iostream>

using namespace std;

int N, M, sx, sy, K;
int map[20][20];
int com[1000];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };
int dice[6] = { 0, };

void dice_move(int i) {
	switch (i) {
	case 0:
		swap(dice[2], dice[0]);
		swap(dice[0], dice[3]);
		swap(dice[3], dice[5]);
		break;
	case 1:
		swap(dice[3], dice[0]);
		swap(dice[0], dice[2]);
		swap(dice[2], dice[5]);
		break;
	case 2:
		swap(dice[4], dice[5]);
		swap(dice[0], dice[4]);
		swap(dice[1], dice[0]);
		break;
	case 3:
		swap(dice[1], dice[0]);
		swap(dice[0], dice[4]);
		swap(dice[4], dice[5]);
		break;
	}

}
void solve() {
	int x = sx;
	int y = sy;

	for (int i = 0; i < K; i++) {

		int nx = x + dx[com[i]];
		int ny = y + dy[com[i]];

		if (nx < 0 || nx >= N || ny < 0 || ny >= M) { continue; }

		dice_move(com[i]);

		if (map[nx][ny] == 0) {
			map[nx][ny] = dice[5];
		}
		else {
			dice[5] = map[nx][ny];
			map[nx][ny] = 0;
		}

		cout << dice[0] << endl;

		x = nx;
		y = ny;
	}
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> sx >> sy >> K;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}

	int z;
	for (int i = 0; i < K; i++) {
		cin >> z;
		com[i] = z - 1;
	}

	solve();
	return 0;
}