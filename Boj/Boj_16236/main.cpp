#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

int N;
int map[21][21];
bool check[21][21];
int sx, sy, eat, d, ans;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

struct Shark {
	int x, y, size;
};

queue <Shark> shark;

void bfs() {

	while (!shark.empty()) {
		int qSize = shark.size(); 
		while(qSize--){


			int x = shark.front().x;
			int y = shark.front().y;
			int size = shark.front().size;
			cout << x << ' ' << y << ' ' << size << ' ' << d << ' ' << ans << ' ' << endl;
			shark.pop();

			if (0 < map[x][y] && map[x][y] < size) {
				map[x][y] = 0;
				eat++;

				if (eat == size) {
					size++;
					eat = 0;
				}

				ans += d;
				d = 0;
				memset(check, false, sizeof(check));
				while (!shark.empty()) {
					shark.pop();
				}
			}

			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];

				if (nx < 0 || nx >= N || ny < 0 || ny >= N) { continue; }
				if (check[nx][ny]) { continue; }
				if (0 < map[nx][ny] && map[nx][ny] > size) { continue; }

				shark.push({ nx, ny, size });
				check[nx][ny] = true;
			}
		}
		d++;
	}

	return;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];

			if (map[i][j] == 9) {
				check[i][j] = true;
				shark.push({i, j, 2});
				map[i][j] = 0;
			}
		}
	}
	
	bfs();
	cout << ans;
	return 0;
}