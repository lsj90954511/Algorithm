#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	int gold[1001], silver[1001], bronze[1001];
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		int country;
		cin >> country;
		cin >> gold[country] >> silver[country] >> bronze[country];
	}

	int cnt = 1;
	for (int i = 1; i <= n; i++)
	{
		if (gold[i] > gold[k])
		{
			cnt++;
		}
		else if (gold[i] == gold[k])
		{
			if (silver[i] > silver[k])
			{
				cnt++;
			}
			else if (silver[i] == silver[k])
			{
				if (bronze[i] > bronze[k])
				{
					cnt++;
				}
			}
		}
	}

	cout << cnt;

	return 0;
}