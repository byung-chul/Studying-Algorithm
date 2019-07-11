#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <int> height;

void solve() {
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		sum += height[i];
	}
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (height[i] + height[j]) == 100) {
				for (int z = 0; z < 9; z++) {
					if (z != i && z != j) {
						cout << height[z] << endl;

					}
				}
				return;
			}
		}
	}
}
int main() {

	for (int i = 0; i < 9; i++) {
		int temp;
		cin >> temp;
		height.push_back(temp);
	}

	sort(height.begin(), height.end());
	solve();

	return 0;
}