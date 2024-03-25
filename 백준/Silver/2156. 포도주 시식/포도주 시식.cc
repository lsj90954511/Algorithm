#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int wine[10001] = { 0 }, dp[10001] = { 0 };
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> wine[i];
	}

	dp[1] = wine[1];
	dp[2] = dp[1] + wine[2];
	for (int i = 3; i <= n; i++)
	{
		dp[i] = max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 2] + wine[i]);
		dp[i] = max(dp[i], dp[i - 1]);
	}

	cout << dp[n] << "\n";

	return 0;
}