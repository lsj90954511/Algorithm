#include <iostream>
using namespace std;

char arr[100][100];
int result = 0, n, check[100][100] = { 0 }, x[4] = { 0, 0, 1, -1 }, y[4] = { 1, -1, 0, 0 };

void dfs(int i, int j)
{
	check[i][j] = 1;
	for (int k = 0; k < 4; k++)
	{
		int nx = i + x[k];
		int ny = j + y[k];
		if (nx < 0 || nx >= n || ny < 0 || ny >= n)
			continue;
		if (arr[i][j] == arr[nx][ny] && check[i + x[k]][j + y[k]] != 1)
		{
			dfs(nx, ny);
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	//적록색약 아닌 사람
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (check[i][j] != 1)
			{
				dfs(i, j);
				result++;
			}
		}
	}
	cout << result << " ";
	result = 0;
	//적록색약인 사람
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			check[i][j] = 0;
			if (arr[i][j] == 'R')
				arr[i][j] = 'G';
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (check[i][j] != 1)
			{
				dfs(i, j);
				result++;
			}
		}
	}

	cout << result << "\n";
	
	return 0;
}