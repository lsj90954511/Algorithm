#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	vector<int> v, dp(100002);
	cin >> n;
	v.push_back(0);
	dp[0] = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	dp[1] = v[1];
	for (int i = 2; i <= n; i++)
	{
		dp[i] = max(dp[i - 1] + v[i], v[i - 1] + v[i]);
		dp[i] = max(dp[i], v[i]);
	}
	sort(dp.begin() + 1, dp.begin() + n + 1);

	cout << dp[n];

	return 0;
}