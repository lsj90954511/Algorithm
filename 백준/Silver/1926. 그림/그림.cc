#include <iostream>
#include <vector>
using namespace std;

int n, m, result = 0, art_extent = 0, art_num = 0;
vector<vector<int>> v;
int dx[4] = { 0, 0, 1, -1 }, dy[4] = { 1, -1, 0, 0 };

void dfs(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m && v[nx][ny] == 1) {
			v[nx][ny] = 0;
			art_extent++;
			dfs(nx, ny);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		v.push_back(vector<int>());
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			v[i].push_back(x);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] == 1) {
				art_num++;
				v[i][j] = 0;
				art_extent++;
				dfs(i, j);
				if (result < art_extent) {
					result = art_extent;
				}
				art_extent = 0;
			}
		}
	}

	cout << art_num << "\n" << result;

	return 0;
}