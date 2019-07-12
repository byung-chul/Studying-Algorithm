#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char a;
	cin >> a;

	if(a == 'D'){
		cout << "slowly~";
		return 0;
	}
	if (a == 'C') {
		cout << "run!";
		return 0;
	}
	if (a == 'B') {
		cout << "good!!";
		return 0;
	}
	if (a == 'A') {
		cout << "best!!!";
		return 0;
	}
	cout << "what?";
	return 0;
}