#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int front, back;

	scanf("%d-%d", &front, &back);

	printf("%06d%07d", front, back);
	return 0;
}