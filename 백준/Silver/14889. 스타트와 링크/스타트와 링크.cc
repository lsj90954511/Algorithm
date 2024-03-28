#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int n;
int arr[21][21];
bool visit[21];
int result = 1000000001;

void make_team(int a, int dep)
{
	if (dep == n / 2)
	{
		int start = 0, link = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (visit[i] == true && visit[j] == true)
				{
					start += arr[i][j];
				}
				else if (visit[i] == false && visit[j] == false)
				{
					link += arr[i][j];
				}
			}
		}
		if (result > abs(start - link))
			result = abs(start - link);

		return;
	}

	for (int i = a; i < n; i++)
	{
		if (visit[a] == false)
		{
			visit[a] = true;
		make_team(i + 1, dep + 1);
		visit[a] = false;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	make_team(0, 0);
	
	cout << result << "\n";

	return 0;
}