#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[50][50];
int n, m, r, c, d, cnt = 0;
int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };
bool visit[50][50] = { false };

void dfs() {
	for (int i = 0; i < 4; i++) {
		int nd = (d + 3 - i) % 4;
		int nx = r + dx[nd];
		int ny = c + dy[nd];

		if (nx < 0 || nx >= n || ny < 0 || ny >= m || arr[nx][ny] == 1) {
			continue;
		}

		if (arr[nx][ny] == 0 && visit[nx][ny] == false) {
			visit[nx][ny] = true;
			r = nx;
			c = ny;
			d = nd;
			cnt++;
			dfs();
		}
	}
	int back = d > 1 ? d - 2 : d + 2;
	int bx = r + dx[back];
	int by = c + dy[back];
	if (bx >= 0 && bx <= n || by >= 0 && by <= m) {
		if (arr[bx][by] == 0) {
			r = bx;
			c = by;
			dfs();
		}
		else {
			cout << cnt;
			exit(0);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	cin >> r >> c >> d;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	visit[r][c] = true;
	cnt++;
	dfs();

	return 0;
}