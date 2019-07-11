#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int h, m;

	scanf("%d:%d", &h, &m);

	cout << h << ":" << m;
	return 0;
}