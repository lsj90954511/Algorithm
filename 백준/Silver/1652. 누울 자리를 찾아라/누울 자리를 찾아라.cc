#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, w = 0, h = 0;
	cin >> n;
	vector<string> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < n; i++)
	{
		int temp = 0, temp2 = 0;
		for (int j = 0; j < v[i].length(); j++)
		{
			if (v[i][j] == '.')
				temp++;
			else
			{
				if (temp >= 2)
				{
					w++;
					temp = 0;
				}
				else
				{
					temp = 0;
				}
			}

			if (v[j][i] == '.')
				temp2++;
			else
			{
				if (temp2 >= 2)
				{
					h++;
					temp2 = 0;
				}
				else
				{
					temp2 = 0;
				}
			}
		}

		if (temp >= 2)
			w++;

		if (temp2 >= 2)
			h++;
	}

	cout << w << " " << h;

	return 0;
}