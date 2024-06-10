#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long t;
	cin >> t;
	while (t--)
	{
		long long n;
		bool isPrime = true;
		cin >> n;
		if (n == 0 || n == 1)
		{
			cout << 2 << "\n";
			continue;
		}
		while (n)
		{
			for (long long i = 2; i <= sqrt(n); i++)
			{
				if (n % i == 0)
				{
					isPrime = false;
					break;
				}
				else
					isPrime = true;
			}
			
			if (isPrime)
			{
				cout << n << "\n";
				break;
			}
			else
			{
				n++;
				continue;
			}
		}
	}

	return 0;
}