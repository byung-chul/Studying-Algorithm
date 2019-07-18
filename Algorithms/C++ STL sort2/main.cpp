#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<pair<int, string>> v;
	v.push_back(pair<int, string>(90, "wrewa"));
	v.push_back(pair<int, string>(80, "bwerwwerw"));
	v.push_back(pair<int, string>(70, "cewrw"));
	v.push_back(pair<int, string>(60, "dewer"));
	v.push_back(pair<int, string>(1000, "ewrew"));

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << ' ';
	}

	return 0;

}