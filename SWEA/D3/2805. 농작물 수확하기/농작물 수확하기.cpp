#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n, cnt = 0, result = 0;
		cin >> n;
		string farm[50];
		for (int i = 0; i < n; i++) {
			cin >> farm[i];
		}

		for (int i = 0; i < n; i++) {
			if (i < n / 2) {
				for (int j = n / 2 - cnt; j <= n / 2 + cnt; j++) {
					result += farm[i][j] - '0';
				}
				cnt++;
			}
			else if (i == n / 2) {
				for (int j = n / 2 - cnt; j <= n / 2 + cnt; j++) {
					result += farm[i][j] - '0';
				}
				cnt--;
			}
			else {
				for (int j = n / 2 - cnt; j <= n / 2 + cnt; j++) {
					result += farm[i][j] - '0';
				}
				cnt--;
			}
		}

		cout << "#" << test_case << " " << result << "\n";
		
	}

	return 0;
}