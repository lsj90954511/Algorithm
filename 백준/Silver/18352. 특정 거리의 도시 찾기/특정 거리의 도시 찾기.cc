#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

int n, m, k, x;
vector<int> visit;
vector<vector<int>> adj;
vector<int> city_dist;
queue<int> q;

void bfs() {
	while (!q.empty()) {
		int city = q.front();
		q.pop();

		for (int i = 0; i < adj[city].size(); i++) {
			int next = adj[city][i];
			if (visit[next] == 0) {
				visit[next] = 1;
				city_dist[next] = city_dist[city] + 1;
				q.push(next);
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	bool find = false;

	cin >> n >> m >> k >> x;

	visit.resize(n + 1, 0);
	adj.resize(n + 1);
	city_dist.resize(n + 1, 0);

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
	}
	q.push(x);
	visit[x] = 1;
	bfs();

	for (int i = 1; i <= n; i++) {
		if (city_dist[i] == k) {
			cout << i << "\n";
			find = true;
		}
	}
	if (!find)
		cout << "-1";

	return 0;
}