#include <iostream>
using namespace std;

int a, b, cnt = 0;
bool visited[101] = { 0 };
int graph[101][101] = { 0 };

void dfs(int node)
{
	visited[node] = true;

	for (int i = 1; i <= a; i++)
	{
		if (!visited[i] && graph[node][i])
		{
			dfs(i);
			cnt++;
		}
	}
}

int main()
{
	int c1, c2;
	cin >> a >> b;
	for (int i = 0; i < b; i++)
	{
		cin >> c1 >> c2;
		graph[c1][c2] = graph[c2][c1] = 1;
	}

	dfs(1);
	cout << cnt << "\n";

	return 0;
}