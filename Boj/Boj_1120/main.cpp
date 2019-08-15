#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	string a;
	string b;
	int result;
	cin >> a >> b;

	for (int i = 0; i <= b.size() - a.size(); i++) {
		int cnt = 0;
		int idxB = i;
		for (int idxA = 0; idxA < a.size(); idxA++, idxB++) {
			if (a[idxA] == b[idxB])
				continue;
			cnt++;
		}
		result = min(cnt, result);
	}

	cout << result;
	return 0;
}