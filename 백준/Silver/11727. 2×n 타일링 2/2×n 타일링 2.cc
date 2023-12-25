#include <iostream>
#include <cmath>
using namespace std;

int dp[1001] = { 0, 1, 3 };
int f(int a)
{
	if (dp[a])
		return dp[a];
	return dp[a] = (f(a - 1) % 10007 + 2 * f(a - 2) % 10007) % 10007;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	cout << f(n) % 10007;

	return 0;
}
