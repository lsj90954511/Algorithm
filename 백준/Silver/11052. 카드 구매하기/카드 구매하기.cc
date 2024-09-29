#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int dp[1001] = { 0 }, p[1001];
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	dp[1] = p[1];
	for (int i = 2; i <= n; i++) {
		int max_temp = 0;
		for (int j = 1; j <= i / 2; j++) {
			int temp = dp[j] + dp[i - j];
			if (max_temp < temp)
				max_temp = temp;
		}
		dp[i] = max(max_temp, p[i]);
	}

	cout << dp[n];

	return 0;
}