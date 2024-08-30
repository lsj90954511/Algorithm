#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
bool visit[10];
int arr[10][10];
int result = 10000001;

void bt(int dep, int start, int prev, int cost) {
	if (dep == n) {
		if (arr[prev][start] == 0)
			return;
		cost += arr[prev][start];
		result = min(result, cost);
		return;
	}
	for (int i = 0; i < n; i++) {
		if (visit[i] || arr[prev][i] == 0)
			continue;
		visit[i] = true;
		bt(dep + 1, start, i, cost + arr[prev][i]);
		visit[i] = 0;
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		visit[i] = true;
		bt(1, i, i, 0);
		visit[i] = 0;
	}

	cout << result;
	
	return 0;
}