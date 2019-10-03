#include <iostream>
#include <queue>

using namespace std;

int R, C;
int gx, gy, ex, ey;
char map[51][51];
bool waterCheck[51][51];
bool dCheck[51][51];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
bool flag;
int ans;

queue <pair<int, int>> dq;
queue <pair<int, int>> wq;

void bfs() {
	while (!dq.empty()) {
		int wqSize = wq.size();
		int dqSize = dq.size();

		while (wqSize--) {
			int wx = wq.front().first;
			int wy = wq.front().second;
			wq.pop();

			for (int i = 0; i < 4; i++) {
				int nwx = wx + dx[i];
				int nwy = wy + dy[i];

				if (nwx < 0 || nwx >= R || nwy < 0 || nwy >= C) {
					continue;
				}
				if (map[nwx][nwy] == 'D' || map[nwx][nwy] == 'X' || map[nwx][nwy] == '*') {
					continue;
				}
				map[nwx][nwy] = '*';
				wq.push(make_pair(nwx, nwy));
			}
		}
		while (dqSize--) {
			int gx = dq.front().first;
			int gy = dq.front().second;
			dq.pop();

			if (gx == ex &&      gy == ey) { 
				flag = true;
				break; 
			}

			for (int i = 0; i < 4; i++) {
				int ngx = gx + dx[i];
				int ngy = gy + dy[i];

				if (ngx < 0 || ngx >= R || ngy < 0 || ngy >= C) {
					continue;
				}
				if (map[ngx][ngy] == 'X' || map[ngx][ngy] == '*') {
					continue;
				}
				if (dCheck[ngx][ngy]) {
					continue;
				}

				dCheck[ngx][ngy] = true;
				dq.push(make_pair(ngx, ngy));
			}
		}
		if (flag) {
			break;
		}
		ans++;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'S') {
				dq.push(make_pair(i, j));
			}
			else if (map[i][j] == 'D') {
				ex = i;
				ey = j;
			}
			else if (map[i][j] == '*') {
				wq.push(make_pair(i, j));
			}
		}
	}

	bfs();

	if (!flag) {
		cout << "KAKTUS" << '\n';
	}
	else {
		cout << ans << '\n';
	}

	return 0;
}