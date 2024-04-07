#include <iostream>
#include <string.h>
using namespace std;

int w, h, cnt = 0;
int dx[8] = { -1, -1, -1, 0, 1, 1, 1, 0 }, dy[8] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int map[51][51], visit[51][51];

void dfs(int x, int y)
{
	visit[x][y] = 1;

	for (int i = 0; i < 8; i++)
	{
		//다음 노드
		int nx = x + dx[i];
		int ny = y + dy[i];
		//다음 노드가 지도의 범위를 벗어나지 않고, 방문하지 않았고, 땅일 경우
		if (nx >= 0 && nx < h && ny >= 0 && ny < w && visit[nx][ny] == 0 && map[nx][ny] == 1)
		{
			dfs(nx, ny);
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true)
	{
		//초기화
		cnt = 0;
		memset(visit, 0, sizeof(visit));

		//입력
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
				cin >> map[i][j];
		}

		//탐색
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				if (map[i][j] == 1 && visit[i][j] == 0)
				{
					cnt++;
					dfs(i, j);
				}
			}
		}

		//출력
		cout << cnt << '\n';
	}

	return 0;
}