#include <iostream>
#include <string>

using namespace std;

int main()
{
	string isbn;
	int hap = 0;
	int idx;
	cin >> isbn;

	for (int i = 0; i < isbn.size(); i++) {
		if (isbn[i] == '*') {
			idx = i;
			continue;
		}
		else if (i % 2 == 0) {
			hap += (isbn[i] - '0') * 1;
		}
		else {
			hap += (isbn[i] - '0') * 3;
		}
	}
	if (idx % 2 == 0) {
		for (int i = 1; i <= 9; i++) {
			if ((i + hap) % 10 == 0) {
				cout << i << "\n";
				return 0;
			}
		}
	}
	else {
		for (int i = 0; i <= 9; i++) {
			if ((i * 3 + hap) % 10 == 0) {
				cout << i << "\n";
				return 0;
			}
		}
	}

	return 0;
}