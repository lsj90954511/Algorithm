#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, a = 666, x = 0;
	cin >> n;
	while (x != n)
	{
		string s = to_string(a);
		if (s.find("666") != string::npos)
		{
			x++;
		}
		if (x == n)
		{
			cout << a << endl;
			break;
		}

		a++;
	}

	return 0;
}