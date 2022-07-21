#include <iostream>
using namespace std;

int mo = 0, o = 0, z = 0, arr[2200][2200];

void paper(int x, int y, int n)
{
	bool mm = true, oo = true, zz = true;
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (arr[i][j] == -1)
			{
				oo = false;
				zz = false;
			}
			if (arr[i][j] == 0)
			{
				mm = false;
				oo = false;
			}
			if (arr[i][j] == 1)
			{
				mm = false;
				zz = false;
			}

		}
	}
	if (mm)
	{
		mo++;
		return;
	}
	if (oo)
	{
		o++;
		return;
	}
	if (zz)
	{
		z++;
		return;
	}
	paper(x, y, n / 3);
	paper(x, y + n / 3, n / 3);
	paper(x, y + 2 * n / 3, n / 3);
	paper(x + n / 3, y, n / 3);
	paper(x + n / 3, y + n / 3, n / 3);
	paper(x + n / 3, y + 2 * n / 3, n / 3);
	paper(x + 2 * n / 3, y, n / 3);
	paper(x + 2 * n / 3, y + n / 3, n / 3);
	paper(x + 2 * n / 3, y + 2 * n / 3, n / 3);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	paper(0, 0, n);

	cout << mo << "\n" << z << "\n" << o << "\n";

	return 0;
}