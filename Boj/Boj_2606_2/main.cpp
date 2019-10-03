#include <iostream>
#include <queue>

using namespace std;

int N, M;
int edge[101][101];
bool check[101];
int cnt;

queue <int> q;

void bfs(int x) {
	q.push(x);
	check[x] = true;

	while (!q.empty()) {
		int a = q.front();
		q.pop();

		for (int i = 1; i <= N; i++) {
			if (edge[a][i] && edge[i][a] && !check[i]) {
				check[i] = true;
				q.push(i);
				cnt++;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	cin >> N >> M;
	int tmp1, tmp2;

	for (int i = 0; i < M; i++) {
		cin >> tmp1 >> tmp2;
		edge[tmp1][tmp2] = 1;
		edge[tmp2][tmp1] = 1;
	}

	bfs(1);
	cout << cnt;

	return 0;
}