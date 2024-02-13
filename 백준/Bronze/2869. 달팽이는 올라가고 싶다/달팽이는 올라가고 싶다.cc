#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long a, b, v, day = 0, dist = 0;
	cin >> a >> b >> v;
	day += (v - a) / (a - b);
	if (day * (a - b) + a >= v)
		day++;
	else
		day += 2;

	cout << day;

	return 0;
}
