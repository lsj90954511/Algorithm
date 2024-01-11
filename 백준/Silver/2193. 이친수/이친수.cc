#include <iostream>
using namespace std;

long long arr[93] = { 0, 1, 1 };
long long dp(int n)
{
	if (arr[n] != 0)
		return arr[n];
	else
		return arr[n] = dp(n - 1) + dp(n - 2);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	cout << dp(n);

	return 0;
}
