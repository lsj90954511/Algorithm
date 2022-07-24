#include <iostream>
#include <string>
using namespace std;

string s;
int arr[64][64];

void qt(int x, int y, int n)
{
	bool o = true, z = true;
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (arr[i][j] == 0)
				o = false;
			if (arr[i][j] == 1)
				z = false;
		}
	}

	if (o)
	{
		s.append("1");
		return;
	}
	else if (z)
	{
		s.append("0");
		return;
	}
	else
	{
		s.append("(");
		qt(x, y, n / 2);
		qt(x, y + n / 2, n / 2);
		qt(x + n / 2, y, n / 2);
		qt(x + n / 2, y + n / 2, n / 2);
		s.append(")");
	}
}

int main()
{
	int n;
	string ss;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ss;
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = ss[j] - '0';
		}
	}
	qt(0, 0, n);

	cout << s << "\n";

	return 0;
}