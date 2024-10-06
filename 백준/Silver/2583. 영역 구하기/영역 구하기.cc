#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int m, n, k, cnt = 0;
int arr[100][100] = { 0 };
int dx[4] = { 0, 0, 1, -1 }, dy[4] = { 1, -1, 0, 0 };
int area = 1;
vector<int> result;

void dfs(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (arr[nx][ny] == 0 && nx >= 0 && nx < m && ny >= 0 && ny < n) {
			arr[nx][ny] = area;
			cnt++;
			dfs(nx, ny);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	cin >> m >> n >> k;
	while (k--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = m - y2; i < m - y1; i++) {
			for (int j = x1; j < x2; j++) {
				arr[i][j] = -1;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 0) {
				arr[i][j] = area;
				cnt++;
				dfs(i, j);
				area++;
				result.push_back(cnt);
				cnt = 0;
			}
		}
	}

	sort(result.begin(), result.end());

	cout << area - 1 << "\n";
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}

	return 0;
}