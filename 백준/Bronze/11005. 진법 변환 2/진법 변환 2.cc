#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int n, b;
	string s;
	cin >> n >> b;

	while (n >= b) {
		int temp = n % b;
		n /= b;
		if (temp >= 10) {
			s += 'A' + (temp - 10);
		}
		else {
			s += temp + '0';
		}
	}
	if (n >= 10) {
		s += 'A' + (n - 10);
	}
	else {
		s += n + '0';
	}
	reverse(s.begin(), s.end());
	cout << s;

	return 0;
}