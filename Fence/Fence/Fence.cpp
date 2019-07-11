#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int testCase,fenceNum;
	vector<int> height;

	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		cin >> fenceNum;

		if (fenceNum < 0 || fenceNum > 20000) { exit(-1); };

		for (int j = 0; j < fenceNum; j++) {
			cin >> height [j];
		}
	}
}