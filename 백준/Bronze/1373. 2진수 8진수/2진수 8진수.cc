#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s, result;
	cin >> s;
	for (int i = s.length() - 1; i >= 0; i -= 3) {
		int temp = 0;
		for (int j = 0; j < 3; j++) {
			if (i - j < 0)
				break;
			temp += (s[i - j] - '0') * pow(2, j);
		}
		result += to_string(temp);
	}
	reverse(result.begin(), result.end());
	cout << result;

	return 0;
}