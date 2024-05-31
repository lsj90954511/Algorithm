#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n, m;
	cin >> t;

	for (int k = 0; k < t; k++)
	{
		cin >> n >> m;
		int a, b, cnt = 0;
		vector<int> v[1001];
		bool visit[1001] = { false };
		queue<int> q;
		for (int i = 0; i < m; i++)
		{
			cin >> a >> b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		q.push(1);
		visit[1] = true;
		while (!q.empty())
		{
			int node = q.front();
			q.pop();
			for (int i = 0; i < v[node].size(); i++)
			{
				int next = v[node][i];
				if (!visit[next])
				{
					visit[next] = true;
					cnt++;
					q.push(next);
				}
			}
		}

		cout << cnt << '\n';
	}

	return 0;
}