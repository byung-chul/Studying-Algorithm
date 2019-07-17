#include<iostream>
#include<vector>

using namespace std;

bool areFriends[10][10];
int studentNum;
int countpeer(bool student[10]) {

	int firstStudent = -1;

	for (int i = 0; i < studentNum; i++) {
		if (student[i] != 0) {
			firstStudent = i;
			break;
		}
	}

	if (firstStudent == -1) {
		return 1;
	}
	int result = 0;

	for (int i = firstStudent + 1; i < studentNum; i++) {
		if (!student[i] && areFriends[firstStudent][i]) {

		}
	}
}
int main() {

	int testCase;
	bool student[10];

	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		
		int peerNum;

		cin >> studentNum >> peerNum;

		//cout << testCase << endl;
		//cout << studentNum << endl;
		//cout << peerNum << endl;
		memset(areFriends, false, sizeof(areFriends));
		memset(student, false, sizeof(student));

		for (int inCount = 0; inCount < peerNum; inCount++) {
			
			int student1, student2;
			cin >> student1 >> student2;
			areFriends[student1][student2] = true;
			areFriends[student2][student1] = true;
			
		}

	}

	return 0;
}