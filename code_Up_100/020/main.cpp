#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int year, month, day;
	scanf("%d.%d.%d", &year, &month, &day);

	printf("%04d.%02d.%02d", year, month, day);
	return 0;
}