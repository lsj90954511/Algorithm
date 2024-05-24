#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
	if (a < b)
		return gcd(b, a);
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (i > 0)
		{
			cout << v[0] / gcd(v[0], v[i]) << "/" << v[i] / gcd(v[0], v[i]) << "\n";
		}
	}

	return 0;
}