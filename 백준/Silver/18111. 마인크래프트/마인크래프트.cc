#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, b, h, inven, time = INT_MAX;
	cin >> n >> m >> b;
	inven = b;
	vector<vector<int>> v(n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}

	for (int k = 0; k <= 256; k++)
	{
		int t = 0, rem = 0, add = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (v[i][j] >= k)
				{
					rem += v[i][j] - k;
				}
				else
				{
					add += k - v[i][j];
				}
			}
		}
		if (rem + b >= add)
		{
			t += rem * 2;
			t += add;
			if (t <= time)
			{
				time = t;
				h = k;
			}
		}
	}
	
	cout << time << " " << h;

	return 0;
}
