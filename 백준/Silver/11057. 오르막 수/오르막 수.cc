#include <iostream>
#include <vector>
using namespace std;
#define mod 10007

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int n, result = 0;
	cin >> n;
	vector<vector<int>> v(n + 1, vector<int>(10));

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			if (i == 1 || j == 0) {
				v[i][j] = 1;
			}
			else {
				v[i][j] = v[i][j - 1] + v[i - 1][j];
			}
			v[i][j] %= mod;
		}
	}

	for (int i = 0; i <= 9; i++) {
		result += v[n][i];
	}

	cout << result % mod;

	return 0;
}