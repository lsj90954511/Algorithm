#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, result, arr[1001], dp[1001] = { 1 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	result = dp[0];
	for (int i = 1; i < n; i++)
	{
		dp[i] = 1;
		for (int j = i - 1; j >= 0; j--)
		{
			if (arr[i] > arr[j])
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		if (dp[i] > result)
			result = dp[i];
	}

	cout << result;

	return 0;
}