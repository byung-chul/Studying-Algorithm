#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int N, group_id;
int group[100];
char map[26][26];
bool check[26][26];

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
queue <pair<int, int>> q;

void bfs(int i, int j) {
	q.push(make_pair(i, j));

	check[i][j] = true;
	group[group_id]++;

	while (!q.empty()) {
		i = q.front().first;
		j = q.front().second;
		cout << i << j << endl;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = i + dx[i];
			int ny = j + dy[i];

			if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
				continue;
			}
			if (map[nx][ny] == '1' && !check[nx][ny]) {
				check[nx][ny] = true;
				group[group_id]++;
				q.push(make_pair(nx, ny));
			}

		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!check[i][j] && map[i][j] == '1') {
				group_id++;
				bfs(i, j);

			}
		}
	}

	sort(group, group + group_id);
	cout << group_id << endl;
	for (int i = 0; i < group_id; i++) {
		cout << group[i] << endl;
	}
	return 0;
}