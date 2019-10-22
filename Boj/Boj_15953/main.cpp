#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
	vector<int> answer;

	for (int i = 0; i < answer.size(); i++) {
		if (v[0][i] == v[1][i]) {
			answer[i] = v[2][i];
		}
		else if (v[0][i] == v[2][i]) {
			answer[i] = v[1][i];
		}
		else if (v[1][i] == v[2][i]) {
			answer[i] = v[0][i];
		}
	}

	return answer;
}