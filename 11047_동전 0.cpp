#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k, cnt = 0;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	while (k != 0)
	{
		for (int i = n - 1; i >= 0; i--)
		{
			if (v[i] <= k)
			{
				cnt += k / v[i];
				k = k % v[i];
				break;
			}
		}
	}
	cout << cnt << "\n";

	return 0;
}