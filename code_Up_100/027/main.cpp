#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int y, m, d;

	scanf("%d.%d.%d", &y, &m, &d);

	printf("%02d-%02d-%04d", d, m, y);
	return 0;
}