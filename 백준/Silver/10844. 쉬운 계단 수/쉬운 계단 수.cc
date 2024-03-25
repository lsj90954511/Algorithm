#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	long long dp[101][11];
	long long result = 0;

	for (int i = 1; i <= 9; i++)
	{
		dp[1][i] = 1;
	}
	dp[1][0] = 0;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)
				dp[i][j] = dp[i - 1][j + 1] % 1000000000;
			else if (j == 9)
				dp[i][j] = dp[i - 1][j - 1] % 1000000000;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
	}

	for (int i = 0; i <= 9; i++)
	{
		result += dp[n][i];
	}

	cout << result % 1000000000 << "\n";

	return 0;
}