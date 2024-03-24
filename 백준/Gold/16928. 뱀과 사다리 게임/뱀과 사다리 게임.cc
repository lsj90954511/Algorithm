#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int n, m;
queue<int> q;
int dist[101], next_n[101];

void bfs()
{
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 1; i <= 6; i++)
		{
			int next_move = x + i;
			if (next_move > 100)
				continue;
			next_move = next_n[next_move];
			if (dist[next_move] == -1)
			{
				dist[next_move] = dist[x] + 1;
				q.push(next_move);
			}
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	memset(dist, -1, sizeof(dist));
	for (int i = 1; i <= 100; i++)
	{
		next_n[i] = i;
	}

	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		next_n[a] = b;
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		next_n[a] = b;
	}
	q.push(1);
	dist[1] = 0;
	bfs();

	cout << dist[100] << "\n";
}