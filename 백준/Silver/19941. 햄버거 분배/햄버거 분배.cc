#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, cnt = 0;
	string table;
	cin >> n >> k;
	cin >> table;

	for (int i = 0; i < table.length(); i++) {
		if (table[i] == 'P') {
			for (int j = i - k; j <= i + k; j++) {
				if (j < 0 || j >= table.length())
					continue;
				if (table[j] == 'H') {
					cnt++;
					table[j] = 'X';
					break;
				}
			}
		}
	}

	cout << cnt;

	return 0;
}