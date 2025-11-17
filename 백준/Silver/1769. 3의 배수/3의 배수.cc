#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int cnt = 0;
	cin >> s;
	while (s.length() >= 2) {
		long long hap = 0;
		for (int i = 0; i < s.length(); i++) {
			hap += s[i] - '0';
		}
		s = to_string(hap);
		cnt++;
	}
	cout << cnt << "\n";
	if (stoi(s) % 3 == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}