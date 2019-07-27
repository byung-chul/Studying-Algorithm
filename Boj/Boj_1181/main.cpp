#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string a[20000];
int n;

bool compare(string a, string b){
	if (a.length() < b.length()) {
		return 1;
	}
	else if (a.length() > b.length()) {
		return 0;
	}
	else {
		return a < b;
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, compare);

	for (int i = 0; i < n; i++) {
		if (i > 0 && a[i] == a[i - 1]) {
			continue;
		}
		else {
			cout << a[i] << endl;
		}
	}
	return 0;
}