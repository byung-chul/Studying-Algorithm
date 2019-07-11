//Boj_10253 Çî¸®
#include <iostream>

using namespace std;

int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a%b);
}
void solve(int a, int b) {

	int x;

	while (a != 1)
	{
		x = (b%a == 0) ? (b / a) : (b / a + 1);
		a = a * x - b;
		b *= x;
		int g = gcd(a, b);
		a /= g;
		b /= g;
	}

	cout << b << endl;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int test;
	int A, B;

	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> A >> B;
		solve(A, B);
	}

	return 0;
}