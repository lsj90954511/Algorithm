#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	int hap = 0;
	for (int a = 0; a < n - 2; a++)
	{
		for (int b = a + 1; b < n - 1; b++)
		{
			for (int c = b + 1; c < n; c++)
			{
				if (v[a] + v[b] + v[c] <= m && abs(m - hap) > abs(m - (v[a] + v[b] + v[c])))
					hap = v[a] + v[b] + v[c];
			}
		}
	}
	cout << hap;

	return 0;
}