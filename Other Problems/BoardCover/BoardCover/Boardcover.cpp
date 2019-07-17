#include <iostream>

using namespace std;

const int Block[4][3][2] = {
	{{0,0}, {1,0}, {0,1}},
	{{0,0}, {0,1}, {1,1}},
	{{0,0}, {1,0}, {1,1}},
	{{0,0}, {1,0}, {1,-1}}
};

bool set(int board[][20], int x, int y, int H, int W, int shape, int push) {
	
	bool ok = true;
	for (int i = 0; i < 3; i++) {
		
		const int nx = x + Block[shape][i][0];
		const int ny = y + Block[shape][i][1];
		
		//�������� �����?
		if (nx < 0 || nx >= H || ny < 0 || ny >= W) { ok = false; }
		else if ((board[nx][ny] += push) > 1) { ok = false; }

		return ok;
	}
}

int cover(int board[][20], int H, int W) {

	int x = -1;
	int y = -1;

	for (int i = 0; i < H; i++) {

		for (int j = 0; j < W; j++) {
			//ä������ �ʾ�����?
			if (!board[i][j]) {
				x = i;
				y = j;
				break;
			}
		}
		if (x != -1) { break; }
	}
	//�� ä���������� 1
	if (x == -1) { return 1; }
	
	int count = 0;

	for (int shape = 0; shape < 4; shape++) {
		if (set(board, x, y, H, W, shape, 1)) {
			count += cover(board, H, W);
		}
		set(board, x, y, H, W, shape, -1);
	}
}
int main(void) {

	int testCase;
	int H, W;
	//��ü ������
	int board[20][20];
	//�������� �Է¹޴� ������ ���⼭ �Է¹������� board[][]�� ��ȯ�� ����
	char blackwhite[20];

	cin >> testCase;
	if (testCase < 1 || testCase > 30) { exit(-1); }

	for (int i = 0; i < testCase; i++) {
		cin >> H >> W;
		if (H < 1 || H > 20 || W < 1 || W > 20) { exit(-1); }
		
		for (int i = 0; i < H; i++) {
			cin >> blackwhite;
			for (int j = 0; j < W; j++) {
				board[i][j] = (blackwhite[j] == '#') ? 1 : 0;
			}
		}
		cout << cover(board, H, W)<<endl;
	}
	return 0;
}