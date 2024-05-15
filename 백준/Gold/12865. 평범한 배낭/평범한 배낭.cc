#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	int w[101] = { 0 }, v[101] = { 0 };
	cin >> n >> k;
	vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
	for (int i = 1; i <= n; i++)
	{
		cin >> w[i] >> v[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			if (j - w[i] >= 0)
			{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	cout << dp[n][k];

	return 0;
}