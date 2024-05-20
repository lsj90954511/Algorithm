#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b)
{
	if (a < b)
		return GCD(b, a);
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;
	cin >> t;
	while (t--)
	{
		long long hap = 0;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				hap += GCD(v[i], v[j]);
			}
		}
		cout << hap << "\n";
	}

	return 0;
}