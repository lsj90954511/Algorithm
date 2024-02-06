#include <iostream>
#include <vector>
using namespace std;

int n, m, cnt = 0, visit[1001];
vector<int> v[1001];

void dfs(int node)
{
	visit[node] = 1;
	for (int i = 0; i < v[node].size(); i++)
	{
		int index = v[node][i];
		if (visit[index] == 0)
			dfs(index);
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
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= n; i++)
	{
		if (visit[i] == 0)
		{
			cnt++;
			dfs(i);
		}
	}

	cout << cnt;

	return 0;
}