#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[9] = { 0 }, visit[9] = { 0 };
int n, m;

void dfs(int num, int dep)//시작점, 단계
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

	for (int i = num; i <= n; i++)
	{
		if (visit[i] == 0)
		{
			visit[i] = 1;
			arr[dep + 1] = i;
			dfs(i + 1, dep + 1);
			visit[i] = 0;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	dfs(1, 0);

	return 0;
}
