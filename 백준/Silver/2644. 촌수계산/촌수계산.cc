#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int n, a, b, m;
bool found = false;
int arr[101][101];
bool visit[101] = { false };

void dfs(int node, int cnt)
{
	if (node == b)
	{
		found = true;
		cout << cnt;
		return;
	}

	visit[node] = true;
	for (int i = 1; i <= n; i++)
	{
		if (!visit[i] && arr[node][i])
		{
			dfs(i, cnt + 1);
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> a >> b >> m;

	for (int i = 0; i < m; i++)
	{ 
		int x, y;
		cin >> x >> y;
		arr[x][y] = arr[y][x] = 1;
	}
	dfs(a, 0);

	if (!found)
		cout << "-1";

	return 0;
}