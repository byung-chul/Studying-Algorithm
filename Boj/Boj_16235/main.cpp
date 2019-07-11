//Boj 16235 나무 재테크
#include <iostream>
#include <list>

using namespace std;

struct Tree
{
	int r, c, age;		//나무의 x, y, 나이
	bool alive;			//알아있나
};

int N, M, K;			//땅 변의 크기/ 처음 나무의 수/연차 
int A[10][10];			//매년 기계로 추가하는 양분
int F[10][10];			//현재 땅의 양분

list<Tree> Trees;		//Tree구조체 list

int Dr[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int Dc[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

int solve() {
	for (int i = 0; i < K; i++) {

		//봄
		for (list<Tree>::iterator it = Trees.begin(); it != Trees.end(); ++it) {
			if (it->age <= F[it->r][it->c]) {
				F[it->r][it->c] -= it->age;
				it->age++;
			}
			else {
				it->alive = false;
			}
		}

		//여름
		for (list<Tree>::iterator it = Trees.begin(); it != Trees.end();) {
			if (it->alive) {
				++it;
			}
			else {
				F[it->r][it->c] += it->age / 2;
				it = Trees.erase(it);
			}
		}

		//가을
		for(list<Tree>::iterator it = Trees.begin(); it != Trees.end(); ++it){
			if (it->age % 5 == 0) {
				for (int i = 0; i < 8; i++) {
					
					int nr = it->r + Dr[i];
					int nc = it->c + Dc[i];

					if (nr < 0 || nr > N - 1 || nc <0 || nc > N - 1) {
						continue;
					}

					Trees.push_front({ nr, nc, 1, true });
				}
			}
		}

		//겨울
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				F[i][j] += A[i][j];
			}
		}
	
	}

	return Trees.size();
}
int main() {

	cin >> N >> M >> K;

	for (int i = 0; i < N; i++) {
		for(int j=0;j<N;j++){
			cin >> A[i][j];
			F[i][j] = 5;
		}
	}

	int x, y, z;
	for (int i = 0; i < M; i++) {
		cin >> x >> y >> z;
		Trees.push_back({ x - 1, y - 1, z, true });
	}

	cout << solve() << endl;

	return 0;
}