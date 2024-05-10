#include <iostream>
using namespace std;

long long a, b, c, result = 1;

long long f(long long x) {
	if (x == 1)
		return a % c;
	long long k = f(x / 2) % c;

	if (x % 2 == 0)
		return k * k % c;
	else
		return k * k % c * a % c;
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> a >> b >> c;
	
	cout << f(b);

	return 0;
}