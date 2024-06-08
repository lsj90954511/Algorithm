#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, cnt = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = n - 1; i > 0; i--)
	{
		while (v[i] <= v[i - 1])
		{
			v[i - 1]--;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}