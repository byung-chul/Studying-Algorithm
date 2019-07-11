// Boj_1024 ¼ö¿­ÀÇ ÇÕ
#include <iostream>

using namespace std;

int N;
int L;

void solve(int n, int l) {
	int start = 0, last = 0, mid = 0, temp = 0;
	
	for (int i = l; i < 101; i++) {
		if (i % 2 == 1 && (n % i) == 0) { // È¦¼ö°³ ex) n-1, n, n+1
			mid = n / i; // n
			temp = i / 2; // 1
			start = mid - temp;
			if (start < 0) {
				start = 0;
				break;
			}
			for (int j = 0; j < i; j++) {
				last = start + j;
				cout << start + j << ' ';
			}
			return;
		}
		else if (i%2 == 0 &&(n-(i/2)) % i == 0) { //Â¦¼ö°³ ex) n-1, n, n+1, n+2
			mid = (n - (i / 2)) / i; // n
			temp = (i/2)-1; // 1
			start = mid - temp; // n-1
			if (start < 0) {
				start = 0;
				break;
			}
			for (int j = 0; j < i; j++) {
				last = start + j;
				cout << start + j << ' ';
			}
			return;
		}
	}
	if (last - start < 1 || (last - start) + 1 > 100) {
		cout << -1;
		return;
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	cin >> N >> L;

	solve(N, L);
	return 0;
}