#include <iostream>
#include <string.h>
using namespace std;

int n, cnt, result = 1;
int arr[100][100];
int dx[4] = { 0, 0, 1, -1 }, dy[4] = { 1, -1, 0, 0 };
bool visit[100][100] = { false };

void dfs(int k, int x, int y) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (visit[nx][ny] == false && arr[nx][ny] > k && nx >= 0 && nx < n && ny >= 0 && ny < n) {
			visit[nx][ny] = true;
			dfs(k, nx, ny);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	int min_height = 101, max_height = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] < min_height) min_height = arr[i][j];
			if (arr[i][j] > max_height) max_height = arr[i][j];
		}
	}
	for (int t = min_height; t <= max_height; t++) {
		cnt = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (visit[i][j] == false && arr[i][j] > t) {
					visit[i][j] = true;
					dfs(t, i, j);
					cnt++;
				}
			}
		}
		if (result < cnt)
			result = cnt;
		memset(visit, false, sizeof(visit));
	}
	
	cout << result;
	
	return 0;
}