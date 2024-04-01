#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n;
int ans[100001];
bool visit[100001];
vector<int> v[100001];

void bfs()
{
	queue<int> q;
	visit[1] = true;
	q.push(1);

	while (!q.empty())
	{
		int parent = q.front();
		q.pop();

		for (int i = 0; i < v[parent].size(); i++)
		{
			int child = v[parent][i];
			if (!visit[child])
			{
				ans[child] = parent;
				visit[child] = true;
				q.push(child);
			}
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	bfs();
	for (int i = 2; i <= n; i++)
	{
		cout << ans[i] << '\n';
	}

	return 0;
}