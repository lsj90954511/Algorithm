#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int n, m, result, arr[501][501];
bool visit[501][501];
int dx[4] = { 0, 0, 1, -1 }, dy[4] = { 1, -1, 0, 0 };
int ex[4][4] = { {0, 0, 0, 1}, {0, 1, 2, 1}, {0, 0, 0, -1}, {0, -1, 0, 1} };
int ey[4][4] = { {0, 1, 2, 1}, {0, 0, 0, 1}, {0, 1, 2, 1}, {0, 1, 1, 1} };

int max(int a, int b)
{
	return a > b ? a : b;
}

void dfs(int x, int y, int sum, int length)
{
	if (length >= 4)
	{
		result = max(result, sum);
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= n || ny < 0 || ny >= m)
			continue;

		if (!visit[nx][ny])
		{
			visit[nx][ny] = true;

			dfs(nx, ny, sum + arr[nx][ny], length + 1);

			visit[nx][ny] = false;
		}
	}
}

void check_exshape(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int sum = 0;
		bool isOut = false;
		for (int j = 0; j < 4; j++)
		{
			int nx = x + ex[i][j];
			int ny = y + ey[i][j];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
			{
				isOut = true;
				break;
			}
			sum += arr[nx][ny];
		}
		if (!isOut)
			result = max(result, sum);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			visit[i][j] = true;
			dfs(i, j, arr[i][j], 1);
			visit[i][j] = false;

			check_exshape(i, j);
		}
	}
	
	cout << result << "\n";

	return 0;
}
