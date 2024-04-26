#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int t, n;
vector<int> v[1001];
bool visit[1001] = { false };

void dfs(int x)
{
	visit[x] = true;
	for (int i = 0; i < v[x].size(); i++)
	{
		int con = v[x][i];
		if (con != 0 && visit[con] == false)
		{
			dfs(con);
		}
	}
	return;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> t;
	while (t--)
	{
		int cnt = 0;
		memset(v, 0, sizeof(v));
		memset(visit, false, sizeof(visit));
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			int x;
			cin >> x;
			v[i].push_back(x);
		}
		for (int i = 1; i <= n; i++)
		{
			if (!visit[i])
			{
				cnt++;
				dfs(i);
			}
		}
		cout << cnt << "\n";
	}

	return 0;
}