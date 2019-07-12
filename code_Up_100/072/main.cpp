#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> a;
	int b, tmp;

	cin >> b;
	for (int i = 0; i < b; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}
	return 0;
}