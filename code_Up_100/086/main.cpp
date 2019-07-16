#include <iostream> 

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int w, h, b;

	cin >> w >> h >> b;

	cout.precision(2);
	cout << fixed << (float)(w*h*b) / (8*1024*1024) << " MB";

	return 0;
}