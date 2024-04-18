#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a1, b1, a2, b2, ans1, ans2;
	cin >> a1 >> b1 >> a2 >> b2;
	
	ans1 = a1 * (lcm(b1, b2) / b1) + a2 * (lcm(b1, b2) / b2);
	ans2 = lcm(b1, b2);

	cout << ans1 / gcd(ans1, ans2) << " " << ans2 / gcd(ans1, ans2);

	return 0;
}