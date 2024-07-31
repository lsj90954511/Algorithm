#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, temp = 1;
	cin >> n;
	for (int i = 1; i <= 2 * n - 1; i++)
	{
		if (i <= (2 * n - 1) / 2)
		{
			if (i == n)
			{
				for (int j = 1; j <= 2 * n - 1; j++)
					cout << "*";
				cout << "\n";
				temp -= 2;
				continue;
			}
			for (int j = 1; j <= (2 * n - 1 - temp) / 2; j++)
				cout << " ";
			for (int t = 1; t <= temp; t++)
				cout << "*";
			cout << "\n";
			temp += 2;
		}
		else
		{
			for (int j = 1; j <= (2 * n - 1 - temp) / 2; j++)
				cout << " ";
			for (int t = 1; t <= temp; t++)
				cout << "*";
			cout << "\n";
			temp -= 2;
		}
	}

	return 0;
}

