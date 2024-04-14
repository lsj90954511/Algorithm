#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;
	vector<vector<int>> v(n + 1, vector<int>(k + 1));

	for (int i = 0; i <= n; i++)
	{
		v[i][0] = 1;
	}
	for (int i = 0; i <= k; i++)
	{
		v[i][i] = 1;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			v[i][j] = (v[i - 1][j] % 10007 + v[i - 1][j - 1] % 10007) % 10007;
		}
	}

	cout << v[n][k];

	return 0;
}