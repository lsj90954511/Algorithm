#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long arr[103] = { 0, 1, 1, 1, 2, 2, 3 };

long long dp(int n)
{
	if (arr[n] != 0)
		return arr[n];
	else
	{
		arr[n] = dp(n - 1) + dp(n - 5);
		return arr[n];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n;
	vector<int> v1;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v1.push_back(x);
	}
	sort(v1.begin(), v1.end());
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		if (binary_search(v1.begin(), v1.end(), x))
			cout << "1\n";
		else
			cout << "0\n";
	}

	return 0;
}
