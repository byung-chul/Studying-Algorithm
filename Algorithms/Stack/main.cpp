#include <iostream>
#include <stack>
//c++에서 스택을 사용해보기
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;

	s.push(3);
	s.push(1);
	s.push(7);
	s.pop();
	s.push(4);
	s.push(8);
	s.push(3);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	return 0;
}