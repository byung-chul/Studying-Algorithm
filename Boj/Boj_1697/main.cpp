#include <iostream>
#include <queue>

using namespace std;

int n, k;
bool check[100001];

int bfs() {
	int depth = 0;
	queue<int> q;

	q.push(n);
	check[n] = true;
	while (!q.empty()) {
		int qsize = q.size();
		
		for (int i = 0; i < qsize; i++) {
			int now = q.front();
			q.pop();
			
			check[now] = true;
			if (now == k) {
				queue <int> empty;
				q = empty;
				return depth;
			}
			if (0 <= now - 1 && !check[now - 1]) {
				q.push(now - 1);
			}
			if (now + 1 <= 100000 && !check[now + 1]) {
				q.push(now + 1);
			}
			if (now * 2 <= 100000 && !check[now * 2]) {
				q.push(now * 2);
			}
		}
		depth++;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	cin >> n >> k;

	cout << bfs();

	return 0;
}