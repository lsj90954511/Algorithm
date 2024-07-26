#include <iostream>
using namespace std;

int n, m, max_safe_area = 0;
int arr[8][8], arr2[8][8];
int dx[4] = { 0, 0, 1, -1 }, dy[4] = { 1, -1, 0, 0 };

void dfs(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && nx < n && ny >= 0 && ny < m && arr2[nx][ny] == 0)
		{
			arr2[nx][ny] = 2;
			dfs(nx, ny);
		}
	}
}

int main(void)
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

	int x1, y1, x2, y2, x3, y3;
	for (int i = 0; i < n * m - 2; i++)
	{
		x1 = i / m;
		y1 = i % m;
		if (arr[x1][y1] != 0)
			continue;
		for (int j = i + 1; j < n * m - 1; j++)
		{
			x2 = j / m;
			y2 = j % m;
			if (arr[x2][y2] != 0)
				continue;
			for (int k = j + 1; k < n * m; k++)
			{
				x3 = k / m;
				y3 = k % m;
				if (arr[x3][y3] != 0)
					continue;

				for (int a = 0; a < n; a++)
				{
					for (int b = 0; b < m; b++)
					{
						arr2[a][b] = arr[a][b];
					}
				}

				arr2[x1][y1] = arr2[x2][y2] = arr2[x3][y3] = 1;
				for (int a = 0; a < n; a++)
				{
					for (int b = 0; b < m; b++)
					{
						if (arr2[a][b] == 2)
						{
							dfs(a, b);
						}
					}
				}
				int cnt = 0;
				for (int a = 0; a < n; a++)
				{
					for (int b = 0; b < m; b++)
					{
						if (arr2[a][b] == 0)
						{
							cnt++;
						}
					}
				}
				if (max_safe_area < cnt)
					max_safe_area = cnt;
			}
		}
	}

	cout << max_safe_area;

	return 0;
}

