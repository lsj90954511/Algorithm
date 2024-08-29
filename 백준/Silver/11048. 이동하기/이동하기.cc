#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b) {
	return a < b ? b : a;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<vector<int>> v(n + 1, vector<int>(m + 1, 0));
	vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> v[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]) + v[i][j];
		}
	}

	cout << dp[n][m];
	
	return 0;
}