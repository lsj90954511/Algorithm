#include <iostream>
#include <cmath>
using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int dp[100001] = { 0, 1 };

	cin >> n;
	for (int i = 0; i <= n; i++)
		dp[i] = i;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j * j <= i; j++)
		{
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}

	cout << dp[n];

	return 0;
}