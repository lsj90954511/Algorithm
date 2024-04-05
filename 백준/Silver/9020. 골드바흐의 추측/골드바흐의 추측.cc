#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, n;
	cin >> t;
	int num[10001] = { 1, 1 };
	vector<int> prime;

	for (int i = 2; i <= 10000; i++)
	{
		if (num[i] == 0)
		{
			prime.push_back(i);
			for (int j = 2 * i; j <= 10000; j += i)
				num[j] = 1;
		}
	}

	while (t--)
	{
		int a, b, min = 10001;
		cin >> n;
		for (int i = n / 2; i > 0; i--)
		{
			if (find(prime.begin(), prime.end(), i) != prime.end() && find(prime.begin(), prime.end(), n - i) != prime.end())
			{
				a = i;
				b = n - i;
				break;
			}
		}
		cout << a << ' ' << b << '\n';
	}

	return 0;
}