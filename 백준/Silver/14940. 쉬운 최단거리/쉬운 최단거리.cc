#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, dist = 0;
int arr[1001][1001], visit[1001][1001] = { 0 };
queue <pair<int, int>> q;
int dx[4] = { 0, 0, -1, 1 }, dy[4] = { 1, -1, 0, 0 };

void bfs()
{
	while (!q.empty())
	{
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = a + dx[i], ny = b + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny] != 0 && visit[nx][ny] == 0)
			{
				arr[nx][ny] = arr[a][b] + 1;
				q.push({ nx, ny });
				visit[nx][ny] = 1;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x, y;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1)
				arr[i][j] = -1;
			//시작점 저장
			if (arr[i][j] == 2)
			{
				x = i;
				y = j;
			}
		}
	}
	q.push({ x, y });
	visit[x][y] = 1;
	arr[x][y] = 0;
	bfs();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}
