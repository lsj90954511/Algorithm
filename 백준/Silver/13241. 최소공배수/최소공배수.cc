#include <iostream>
#include <cmath>
using namespace std;

long long GCD(long long a, long long b)
{
	if (a < b)
		return GCD(b, a);
	if (b == 0)
		return a;
	else return GCD(b, a % b);
}

long long  LCM(long long a, long long b)
{
	long long gcd = GCD(a, b);
	return gcd * (a / gcd) * (b / gcd);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long a, b;
	cin >> a >> b;
	cout << LCM(a, b);

	return 0;
}