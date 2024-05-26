#include <iostream>
#include <vector>
using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, result;
	cin >> n >> m;
	int six_min = 1001, one_min = 1001;

	for (int i = 0; i < m; i++)
	{
		int six, one;
		cin >> six >> one;
		if (six_min > six)
			six_min = six;
		if (one_min > one)
			one_min = one;
	}

	result = min(n / 6 * six_min + n % 6 * one_min, (n / 6 + 1) * six_min);
	result = min(result, n * one_min);
	cout << result;

	return 0;
}