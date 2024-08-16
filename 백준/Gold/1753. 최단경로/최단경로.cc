#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define INF 999999999

int n, e, k;
vector<pair<int, int>> node[20001];
priority_queue < pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int value[20001];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int u, v, w;
	cin >> n >> e >> k;
	for (int i = 0; i < e; i++)
	{
		cin >> u >> v >> w;
		node[u].push_back({ v, w });
	}

	for (int i = 1; i <= n; i++)
		value[i] = INF;

	value[k] = 0;
	pq.push({ 0, k });

	while (!pq.empty())
	{
		int x = pq.top().first;
		int U = pq.top().second;
		pq.pop();

		for (int i = 0; i < node[U].size(); i++)
		{
			int V = node[U][i].first;
			int W = node[U][i].second;

			if (x + W < value[V])
			{
				value[V] = x + W;
				pq.push({ x + W, V });
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (value[i] == INF)
			cout << "INF\n";
		else
			cout << value[i] << "\n";
	}

	return 0;
}
