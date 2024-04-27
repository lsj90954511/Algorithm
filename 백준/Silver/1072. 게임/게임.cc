#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long x, y, z;
	cin >> x >> y;
	z = (100 * y) / x;

	if (z >= 99)
	{
		cout << "-1";
		return 0;
	}

	long long result = x, left = 0, right = x, mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if ((100 * (y + mid)) / (x + mid) > z)
		{
			result = mid;
			right = mid - 1;
		}
		else
			left = mid + 1;
	}

	cout << result;

	return 0;
}