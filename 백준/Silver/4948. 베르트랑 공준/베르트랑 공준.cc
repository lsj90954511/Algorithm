#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	vector<int> prime(123456 * 2 + 2);
	prime[0] = prime[1] = 1;
	for (int i = 2; i <= sqrt(123456 * 2); i++)
	{
		for (int j = 2; j <= 123456 * 2; j++)
		{
			if (j != i && j % i == 0)
				prime[j] = 1;//소수가 아니면 1
		}
	}

	while (true)
	{
		cin >> n;
		int r = 0;
		if (n == 0)
			break;
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (prime[i] == 0)
				r++;
		}

		cout << r << "\n";
	}

	return 0;
}