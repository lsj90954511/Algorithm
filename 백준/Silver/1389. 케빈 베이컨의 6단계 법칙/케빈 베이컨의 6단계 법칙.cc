#include <iostream>
#include <queue>
#include <limits.h>
#include <cstring>
using namespace std;

int n, m, kevin = INT_MAX, user_n = 0;
int arr[101][101] = { 0 };
queue<int> q;

void bfs(int start)
{
	int visit[101];
	int temp = 0;
	memset(visit, -1, sizeof(visit));

	q.push(start);
	visit[start]++;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		for (int i = 1; i <= n; i++)
		{
			if (arr[node][i] == 1 && visit[i] == -1)
			{
				q.push(i);
				visit[i] = visit[node] + 1;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		temp += visit[i];
	}
	if (kevin > temp)
	{
		kevin = temp;
		user_n = start;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		arr[a][b] = arr[b][a] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		bfs(i);
	}

	cout << user_n;

	return 0;
}
