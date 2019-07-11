#include <iostream>
using namespace std;
int GCD(int a, int b)
{

	if (b > a)
		return GCD(b, a);
	if (b == 0)
		return a;
	return GCD(b, a%b);
}
int main() {
	int A, B, T, gcd;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		gcd = GCD(A, B);
		if (GCD(A, B) == 1)
			cout << A * B << '\n';
		else

			cout << gcd * (A / gcd) * (B / gcd) << '\n';
	}
}