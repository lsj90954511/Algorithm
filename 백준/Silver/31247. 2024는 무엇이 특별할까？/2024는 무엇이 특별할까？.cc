#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, k, t;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		while (n && k)
		{
			n /= 2;
			k--;
		}
		cout << (n + 1) / 2 << "\n";
	}

	return 0;
}
