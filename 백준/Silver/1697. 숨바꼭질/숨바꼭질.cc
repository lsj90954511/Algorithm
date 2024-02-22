#include <iostream>
#include <queue>
using namespace std;

int n, k;
int visit[100001];
queue <pair<int, int>> q;

void bfs(int n)
{
	int time = 0;
	while (!q.empty())
	{
		int node = q.front().first;
		int time = q.front().second;
		q.pop();

		if (node == k)
		{
			cout << time;
			return;
		}
		if (node - 1 >= 0 && node - 1 <= 100000 && visit[node - 1] == 0)
		{
			visit[node - 1] = 1;
			q.push({ node - 1, time + 1 });
		}
		if (node + 1 >= 0 && node + 1 <= 100000 && visit[node + 1] == 0)
		{
			visit[node + 1] = 1;
			q.push({ node + 1, time + 1 });
		}
		if (node * 2 >= 0 && node * 2 <= 100000 && visit[node * 2] == 0)
		{
			visit[node * 2] = 1;
			q.push({ node * 2, time + 1 });
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> k;
	q.push({ n, 0 });
	visit[n] = 1;
	bfs(n);

	return 0;
}
