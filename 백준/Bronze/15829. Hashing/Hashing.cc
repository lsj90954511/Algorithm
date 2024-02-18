#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int l;
	unsigned long long result = 0;

	cin >> l;
	string s;
	cin >> s;
	unsigned long long x;
	for (int i = 0; i < l; i++)
	{
		if (i == 0)
			x = 1;
		else
			x = ((x % 1234567891) * (31 % 1234567891)) % 1234567891;
		result = (result % 1234567891 + ((s[i] - 'a' + 1) * x) % 1234567891) % 1234567891;
	}

	cout << result;

	return 0;
}
