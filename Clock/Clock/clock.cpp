#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define INF 987654321
#define CLOCK 16
#define SWITCH 10

int linked[SWITCH][CLOCK] = {
	{1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,1,0,1,0,1,0,0,0,0,0},
	{0,0,0,1,0,0,0,0,0,1,0,0,0,1,1,0},
	{1,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,1,1,1,0,1,0,1,0,0,0},
	{1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1},
	{0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,1},
	{0,0,0,0,1,1,0,1,0,0,0,0,0,0,1,1},
	{0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,1,1,1,0,0,0,1,0,0,0,1,0,0}
};

bool isTwelve(vector<int> & clocks) {
	for (int i = 0; i < CLOCK; i++) {
		if (clocks[i] != 12)
			return false;
	}
	return true;
}

void push(vector<int> & clocks, int swtch) {
	
	for (int clock = 0; clock < CLOCK; clock++) {
	
		if (linked[swtch][clock]) {
			clocks[clock] += 3;
		
			if (clocks[clock] == 15) {
				clocks[clock] = 3;
			}
		}
	}
 }
int setting(vector<int> & clocks, int swtch) {

	if (swtch == SWITCH) {
		return isTwelve(clocks) ? 0 : INF;
	}

	int result = INF;
	for (int count = 0; count < 4; count++) {
		result = min(result, count + setting(clocks, swtch + 1));
		push(clocks, swtch);
	}

	return result;

}

int main() {

	int testCase;
	vector<int> clocks(CLOCK);

	cin >> testCase;

	if (testCase < 1 || testCase > 30) { exit(-1); }

	for (int i = 0; i < testCase; i++) {
		
		for (int j = 0; j < CLOCK; j++) {			
			cin >> clocks[j];
		}

		if (setting(clocks, 0) == INF) {
			cout << -1 << endl;
		}
		else {
			cout << setting(clocks, 0) << endl;
		}
	}
	return 0;
}