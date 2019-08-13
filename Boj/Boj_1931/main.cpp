#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second < b.second)	return true;
	else if (a.second > b.second)	return false;
	if (a.first < b.first)	return true;
	else return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<int, int>> c;
	int number;
	int c1, c2;
	int now = 0;
	int cnt = 0;
	cin >> number;

	for (int i = 0; i < number; i++) {
		cin >> c1 >> c2;
		c.push_back(make_pair(c1, c2));
	}

	sort(c.begin(), c.end(), compare);
	for (int i = 0; i < c.size(); i++) {
		if (now <= c[i].first) {
			now = c[i].second;
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}