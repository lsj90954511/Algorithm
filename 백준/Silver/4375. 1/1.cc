#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	while (cin >> n)
	{
		int num = 1, cnt = 1;
		while (num % n != 0)
		{
			cnt++;
			num = num * 10 + 1;
			num %= n;
		}
		cout << cnt << "\n";
	}

	return 0;
}