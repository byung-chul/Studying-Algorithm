//Boj_2455 지능형 기차
#include <iostream>
#include <vector>

using namespace std;

struct Train
{
	int in;
	int out;

};

vector<Train> t;
Train train;

int solve() {

	int ans = 0;
	int people = 0;

	for (int i = 0; i < t.size(); i++) {

		people -= t[i].out;

		people += t[i].in;

		if (people > ans) {
			ans = people;
		}
	}

	return ans;
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 4; i++) {
		cin >> train.out >> train.in;

		t.push_back(train);
	}

	cout << solve() << endl;
}