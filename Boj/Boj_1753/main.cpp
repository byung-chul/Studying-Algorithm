#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

vector<vector<pair<int, int> > > adj;
vector<int> dist;

void bfs(int start) {

	priority_queue<pair<int, int> > q;
	q.push(make_pair(0, start));
	dist[start] = 0;

	while (!q.empty()) {
		int here = q.top().second;
		int DIST = -q.top().first; q.pop();

		if (DIST > dist[here]) continue;

		for (int i = 0; i < adj[here].size(); i++) {
			int next = adj[here][i].first;
			int cost = adj[here][i].second + dist[here];

			if (dist[next] > cost) {
				dist[next] = cost;
				q.push(make_pair(-cost, next));
			}
		}
	}

}

int main() {

	int V, E;
	scanf("%d %d", &V, &E);

	adj = vector<vector<pair<int, int> > >(V + 1);
	dist = vector<int>(V + 1, 123456789);

	int start;
	scanf("%d", &start);

	int a, b, c;
	for (int i = 0; i < E; i++) {
		scanf("%d %d %d", &a, &b, &c);
		adj[a].push_back(make_pair(b, c));
	}

	bfs(start);

	for (int i = 1; i <= V; i++) {
		if (dist[i] == 123456789) printf("INF\n");
		else printf("%d\n", dist[i]);
	}

	return 0;
}
