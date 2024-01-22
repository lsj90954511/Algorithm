#include <iostream>
#include <queue>
using namespace std;

queue<pair<int, int>> q;
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };
int n, m, arr[1001][1001];

void bfs(void)
{
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			//다음 탐색할 노드
			int nx = x + dx[i];
			int ny = y + dy[i];

			//arr 범위를 벗어나지 않고, 토마토가 익지 않았을 경우 큐에 푸시
			if (nx >= 0 && nx < n && ny >= 0 && ny < m && arr[nx][ny] == 0)
			{
				arr[nx][ny] = arr[x][y] + 1; //날짜 계산을 위해 arr[x][y] 값에 1을 더해줌
				q.push({ nx, ny });
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> m >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] == 1)
			{
				q.push({ i, j });
			}
		}
	}

	bfs();

	int max = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			//안 익은 토마토가 있을 경우
			if (arr[i][j] == 0)
			{
				cout << "-1";
				return 0;
			}
			//모든 토마토가 익는 최소 날짜
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}

	cout << max - 1;

	return 0;
}
