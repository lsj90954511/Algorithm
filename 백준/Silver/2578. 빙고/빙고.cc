#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[5][5];
	int cnt = 0;
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 25; i++)
	{
		int threeBingo = 0;
		int x;
		cin >> x;
		cnt++;

		for (int a = 0; a < 5; a++)
		{
			for (int b = 0; b < 5; b++)
			{
				if (arr[a][b] == x)
					arr[a][b] = -1;
			}
		}
		if (i > 3)
		{
			bool bingo = false;
			for (int k = 0; k < 5; k++)
			{
				if (arr[k][k] == -1)
				{
					bingo = true;
				}
				else
				{
					bingo = false;
					break;
				}
			}
			if (bingo)
			{
				threeBingo++;
				bingo = false;
			}
			for (int k = 0; k < 5; k++)
			{
				if (arr[k][4 - k] == -1)
				{
					bingo = true;
				}
				else
				{
					bingo = false;
					break;
				}
			}
			if (bingo)
			{
				threeBingo++;
				bingo = false;
			}
			for (int k = 0; k < 5; k++)
			{
				for (int t = 0; t < 5; t++)
				{
					if (arr[k][t] == -1)
						bingo = true;
					else
					{
						bingo = false;
						break;
					}
				}
				if (bingo)
				{
					threeBingo++;
					bingo = false;
				}
			}
			
			for (int k = 0; k < 5; k++)
			{
				for (int t = 0; t < 5; t++)
				{
					if (arr[t][k] == -1)
						bingo = true;
					else
					{
						bingo = false;
						break;
					}
				}
				if (bingo)
				{
					threeBingo++;
					bingo = false;
				}
			}
			if (threeBingo >= 3)
			{
				cout << cnt;
				return 0;
			}
		}
	}

	return 0;
}