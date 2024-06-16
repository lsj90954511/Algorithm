#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;
	cin >> n;

	if (n == 3 || n == 1)
	{
		cout << "-1";
		return 0;
	}
	
	if ((n % 5) % 2 != 0)
	{
		result += n / 5 - 1;
		n = n % 5 + 5;
		result += n / 2;
	}
	else
	{
		result += n / 5;
		n = n % 5;
		result += n / 2;
	}

	cout << result;

	return 0;
}