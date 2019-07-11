#include <iostream>
#include <algorithm>

using namespace std;
char chars[15];
char password[15];
bool visit[15];
int mo, ja;

void dfs(int start, int L, int C, int d) {

	if (d == L) {
		if (mo == 0 || ja < 2) return;

		for (int i = 0; i < L; i++) {
			cout << password[i];
		}
		cout << endl;
		return;
	}

	for (int i = start; i < C; i++) {
		if (visit[i])	continue;

		password[d] = chars[i];
		if (password[d] == 'a' || password[d] == 'e' || password[d] == 'i' || password[d] == 'o' || password[d] == 'u') {
			mo++;
		}
		else {
			ja++;
		}

		visit[i] = true;
		dfs(i + 1, L, C, d + 1);
		visit[i] = false;
		if (password[d] == 'a' || password[d] == 'e' || password[d] == 'i' || password[d] == 'o' || password[d] == 'u') {
			mo--;
		}
		else {
			ja--;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int L, C;

	cin >> L >> C;

	for (int i = 0; i < C; i++) {
		cin >> chars[i];
	}
	sort(chars, chars + C);

	dfs(0, L, C, 0);
	return 0;
}