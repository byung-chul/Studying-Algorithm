#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int testcase;
	int apply;
	int a, b;
	int max;

	vector <pair<int, int>> v;

	cin >> testcase;
	for (int i = 0; i < testcase; i++) {
		cin >> apply;
		for (int j = 0; j < apply; j++) {
			cin >> a >> b;
			v.push_back(make_pair(a,b));
		}
		sort(v.begin(), v.end());
		int cnt = 1;
		max = v[0].second;

		for (int i = 1; i < apply; i++) {
			if (v[i].second < max) {
				max = v[i].second;
				cnt++;
			}
		}
		cout << cnt << endl;
		v.clear();
	}

	return 0;
}