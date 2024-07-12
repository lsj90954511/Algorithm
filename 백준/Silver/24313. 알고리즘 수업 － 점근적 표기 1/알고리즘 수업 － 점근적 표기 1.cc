#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a1, a0, c, n0;
	bool ok = true;
	cin >> a1 >> a0 >> c >> n0;

	if (a1 == c && a0 <= 0)
	{
		cout << "1";
		return 0;
	}
	else if (a1 == c && a0 > 0)
	{
		cout << "0";
		return 0;
	}

	int temp = (-1 * a0) / (a1 - c);

	if (a1 > c)
	{
		cout << "0";
	}
	else
	{
		if (n0 >= temp)
			cout << "1";
		else
			cout << "0";
	}

	return 0;
}