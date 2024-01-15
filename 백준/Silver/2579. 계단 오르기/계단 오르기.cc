#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}
int stair[302], f[302];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> stair[i];
	}

	f[1] = stair[1];
	f[2] = stair[1] + stair[2];
	f[3] = max(stair[3] + f[1], stair[3] + stair[2]);

	for (int i = 4; i <= n; i++)
	{
		f[i] = max(stair[i] + f[i - 2], stair[i] + stair[i - 1] + f[i - 3]);
	}

	cout << f[n];

	return 0;
}
