#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int t, l;
int dx[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int dy[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };

int chess[300][300] = { 0 };
int check[300][300] = { 0 };
int visit[300][300] = { 0 };
queue<pair<int, int>> q;

void bfs(int tx, int ty) {
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		visit[x][y] = 1;
		if (x == tx && y == ty) {
			cout << check[x][y] << "\n";
			return;
		}
		
		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < l && ny >= 0 && ny < l && visit[nx][ny] == 0) {
				visit[nx][ny] = 1;
				check[nx][ny] = check[x][y] + 1;
				q.push({ nx, ny });
			}
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> l;
		int x, y, tx, ty;
		cin >> x >> y >> tx >> ty;

		q.push({ x, y });
		bfs(tx, ty);

		memset(check, 0, sizeof(check));
		memset(visit, 0, sizeof(visit));

		while (!q.empty())
			q.pop();
	}

	return 0;
}