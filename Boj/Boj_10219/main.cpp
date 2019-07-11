#include <iostream>

using namespace std;

char grill[11][11];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int test;

	cin >> test;
	
	int H, W;

	cin >> H >> W;
	for (int i = 0; i < test; i++) {

		for (int j = 0; j < H; j++) {
			for (int k = 0; k < W; k++) {
				cin >> grill[j][k];
			}
		}
	}

	for (int i = 0; i < H; i++) {
		for (int j = W; j > 0; j--) {
			cout << grill[i][j-1];
		}
		cout << endl;
	}
	return 0;
}