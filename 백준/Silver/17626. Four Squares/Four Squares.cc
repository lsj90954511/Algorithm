#include <iostream>
#include <cmath>
using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, result = 50001;
	int dp[50002] = { 0, 1, 2, 3 };
	cin >> n;
	
	for (int i = 4; i <= n; i++)
	{
		int min_n = 50001;
		for (int j = (int)sqrt(i); j > 0; j--)
		{
			min_n = min(min_n, dp[i - j * j] + 1);
		}
		dp[i] = min_n;
	}

	cout << dp[n];

	return 0;
}
