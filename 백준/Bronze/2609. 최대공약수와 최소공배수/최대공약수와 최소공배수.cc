#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, min, max;
	cin >> a >> b;
	if (a < b)
	{
		min = a;
		max = b;
	}
	else
	{
		min = b;
		max = a;
	}
	
	for (int i = min; i > 0; i--)
	{
		if (max % i == 0 && min % i == 0)
		{
			cout << i << "\n";
			break;
		}
	}
	for (int i = 1; i <= min; i++)
	{
		if (max * i % min == 0)
		{
			cout << max * i;
			break;
		}
	}


	return 0;
}