#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, hd = 0;
	string result = "";
	cin >> n >> m;
	vector<string> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < m; i++)
	{
		int num[4] = { 0 };//a, c, g, t
		int max = -1;
		string add;

		for (int j = 0; j < n; j++)
		{
			switch (v[j][i])
			{
			case 'A':
				num[0]++;
				break;
			case 'C':
				num[1]++;
				break;
			case 'G':
				num[2]++;
				break;
			case 'T':
				num[3]++;
				break;
			}
		}
		
		for (int k = 0; k < 4; k++)
		{
			if (num[k] > max)
			{
				if (k == 0)
					add = "A";
				else if (k == 1)
					add = "C";
				else if (k == 2)
					add = "G";
				else
					add = "T";

				max = num[k];
			}
		}

		result += add;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (v[i][j] != result[j])
				hd++;
		}
	}

	cout << result << "\n" << hd;

	return 0;
}