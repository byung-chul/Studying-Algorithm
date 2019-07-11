#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int number = 20000;
int INF = 1000000000;

vector<pair<int, int>> a[20001];
int d[20001];

void dijkstra(int start) {
	d[start] = 0;

	priority_queue<pair<int, int>> pq;
	pq.push(make_pair(start, 0));

	while (!pq.empty()) {
		int current = pq.top().first;
		int distance = -pq.top().second;
		pq.pop();

		if (d[current] < distance) continue;
		for (int i = 0; i < a[current].size(); i++) {
			int next = a[current][i].first;
			int nextDistance = distance + a[current][i].second;

			if (nextDistance < d[next]) {
				d[next] = nextDistance;
				pq.push(make_pair(next, -nextDistance));
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int edge;
	int start;
	int tmp1, tmp2, weight;

	cin >> number >> edge;
	cin >> start;

	for (int i = 0; i < edge; i++) {
		cin >> tmp1 >> tmp2 >> weight;

		a[tmp1].push_back(make_pair(tmp2, weight));
	}
	for (int i = 1; i < number + 1; i++) {
		d[i] = INF;
	}

	dijkstra(start);

	for (int i = 1; i < number + 1; i++) {
		if (d[i] == INF) {
			cout << "INF" << endl;
		}
		else {
			cout << d[i] << endl;
		}
	}

	return 0;
}