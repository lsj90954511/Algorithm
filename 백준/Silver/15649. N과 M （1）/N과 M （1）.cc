#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[9] = { 0 }, visit[9] = { 0 };

void dfs(int n, int m, int dep)
{
	if (dep == m)
	{
		for (int i = 1; i <= m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++)
	{
		if (visit[i] == 0)
		{
			visit[i] = 1;
			arr[dep + 1] = i;
			dfs(n, m, dep + 1);
			visit[i] = 0;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	dfs(n, m, 0);

	return 0;
}
