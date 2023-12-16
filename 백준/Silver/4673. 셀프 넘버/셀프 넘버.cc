#include <iostream>
using namespace std;

int d(int n)
{
	int r = n; //33

	while (true)
	{
		if (n / 10 == 0)
		{
			r += n;
			break;
		}
		r += n % 10; //36
		n = n / 10; //3
	}

	return r;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cout << 1 << "\n";

	for (int i = 2; i <= 10000; i++)
	{
		bool self_n = false;
		for (int j = 1; j < i; j++)
		{
			if (d(j) == i)
			{
				self_n = false;
				break;
			}
			else
				self_n = true;
		}
		if (self_n)
			cout << i << "\n";
	}
	

	return 0;
}