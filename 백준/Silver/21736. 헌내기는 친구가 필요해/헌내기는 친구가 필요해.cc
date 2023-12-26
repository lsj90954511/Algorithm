#include <iostream>
#include <vector>
using namespace std;

char arr[601][601];
int result = 0, n, m;
bool visit[601][601] = { false };
int x[5] = { 0, 0, 1, -1 }, y[5] = { 1, -1, 0, 0 };

void dfs(int a, int b)
{
	visit[a][b] = true;
	if (arr[a][b] == 'P')
		result++;
	for (int i = 0; i < 4; i++)
	{
		int nx = a + x[i];
		int ny = b + y[i];
		if (nx < 0 || nx >= n || ny < 0 || ny >= m)
			continue;
		if (arr[nx][ny] != 'X' && visit[nx][ny] != true)
			dfs(nx, ny);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	int x, y;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 'I')
			{
				x = i;
				y = j;
			}
		}
	}

	dfs(x, y);

	if (result == 0)
		cout << "TT";
	else
		cout << result;

	return 0;
}
