#include <iostream>
#include <queue>
//c++���� ť�� ����غ���

using namespace std;

int main() {
	queue<int> q;

	q.push(5);
	q.push(6);
	q.push(8);
	q.push(2);
	q.push(4);
	q.push(8);
	q.push(2);

	while (!q.empty()) {
		cout << q.front() << ' ';
		q.pop();
	}
	cout << endl;

	return 0;
}