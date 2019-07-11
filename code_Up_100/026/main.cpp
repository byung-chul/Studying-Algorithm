#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int hour, min, sec;

	scanf("%d:%d:%d", &hour, &min, &sec);

	cout << min;

	return 0;
}