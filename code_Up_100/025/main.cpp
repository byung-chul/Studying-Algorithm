//��ͷ� Ǯ���µ�, C++���� ���̷� ���� �ڵ������ ������ ���� (pow�� ������)�߻�
/*
#include <iostream>

using namespace std;
int cnt = 0;
int temp;
int a;

void solve(int number) {

	if (number == 0) { return; }
	if (number / 10 < 1) {
		temp = a;
		cout << number * pow(10, cnt) << endl;
		number = temp - number * pow(10, cnt);
		a = number;
		cnt = 0;
	}
	else {
		number = number / 10;
		cnt++;
	}
	solve(number);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> a;
	
	solve(a);

	return 0;

}
*/
//������ 5�ڸ���� �����������ϱ� �� ��
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	cin >> a;
	int a1, a2, a3, a4, a5;

	a1 = (a / 10000) * 10000;
	a2 = ((a - a1) / 1000) * 1000;
	a3 = ((a - a1 - a2) / 100) * 100;
	a4 = ((a - a1 - a2 - a3) / 10) * 10;
	a5 = a - a1 - a2 - a3 - a4;
	
	cout << "[" << a1 << "]" << endl;
	cout << "[" << a2 << "]" << endl;
	cout << "[" << a3 << "]" << endl;
	cout << "[" << a4 << "]" << endl;
	cout << "[" << a5 << "]" << endl;

	return 0;
}