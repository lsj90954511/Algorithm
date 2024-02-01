#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m, arr[9], visit[9], n_arr[9];

void dfs(int num, int dep)
{
	if (dep == m)
	{
		for (int i = 0; i < m; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (visit[i] == 0)
		{
			visit[i] = 1;
			arr[dep] = n_arr[i];
			dfs(0, dep + 1);
			visit[i] = 0;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> n_arr[i];
	}
	sort(n_arr, n_arr + n);
	dfs(0, 0);

	return 0;
}