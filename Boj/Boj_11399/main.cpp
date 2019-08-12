#include <iostream>
#include <algorithm>

using namespace std;
int man[1000];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	cout.tie(NULL);

	int number;
	int sum = 0;
	cin >> number;

	for (int i = 1; i < number + 1; i++) {
		cin >> man[i]; 
	}

	sort(man, man+number+1);

	for (int i = 1; i < number + 1; i++) {
		for (int j = 1; j < i+1; j++) {
			sum += man[j];
		}
	}

	cout << sum;

	return 0;
}