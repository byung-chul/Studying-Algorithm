//Boj 10971 외판원순환2
#include <iostream>
#include <algorithm>

using namespace std;

int cityNum;
int cost[11][11];
int visit[11];
int path[11];
int start;
int ans = 987654321;

void DFS(int len, int cur, int sum) {
	if (sum >= ans) {
		return;
	}
	if (len == cityNum) {
		ans = min(ans, sum + cost[path[len-1]][0]);
		return;
	}
	for (int i = 0; i < cityNum; i++) {
		if (visit[i] || !cost[cur][i]) {
			continue;
		}
		path[len] = i;
		visit[i] = 1;
		DFS(len + 1, i, sum + cost[cur][i]);
		visit[i] = 0;
	}
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> cityNum;

	for (int i = 0; i < cityNum; i++) {
		for (int j = 0; j < cityNum; j++) {
			cin >> cost[i][j];
		}
	}

	visit[0] = 1;
	path[0] = 0;
	DFS(1, 0, 0);

	cout << ans << endl;
	return 0;
}