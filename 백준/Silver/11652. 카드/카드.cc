#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, max = 0, result;
	map<long long, long long> m;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		if (m.find(x) != m.end())
		{
			m[x]++;
		}
		else
		{
			m.insert({ x, 1 });
		}
	}

	for (auto iter : m)
	{
		if (iter.second > max)
		{
			max = iter.second;
			result = iter.first;
		}
	}

	cout << result;

	return 0;
}