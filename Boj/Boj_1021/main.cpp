//Boj_1021 회전하는 큐
#include <iostream>

using namespace std;

int number[50];
int f[50];
int ct = 0;
int N, M;

void pop() {
	for (int i = 0; i < N; i++) {
		number[i] = number[i + 1];
	}
	N--;
}
void left() {
	int temp = number[0];
	for (int i = 0; i < N; i++) {
		number[i] = number[i + 1];
	}
	number[N - 1] = temp;
	ct++;
}
void right() {
	int temp = number[N-1];
	for (int i = N-1; i >= 0; i--) {
		number[i] = number[i-1];
	}
	number[0] = temp;
	ct++;
}
void solve(int k) {
	int ccc = 1;
	for (int i = 0; i < N; i++) {
		if (number[i] == k) {
			ccc = i+1;
			break;
		}
		ccc = i+1;
	}
		if (k == number[0]) {
			pop();
			return;
		}
		else if (ccc <= (N+1) / 2) {
			left();
			solve(k);
		}
		else {
			right();
			solve(k);
		}
	}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		number[i] = i + 1;
	}
	for (int j = 0; j < M; j++) {
		cin >> f[j];
		solve(f[j]);
	}
	cout << ct << endl;

	return 0;

}