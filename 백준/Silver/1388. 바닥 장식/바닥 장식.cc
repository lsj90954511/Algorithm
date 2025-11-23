#include <iostream>
#include <vector>
#include <string>
using namespace std;

int a, b, cnt = 0;
vector<string> v;
vector<vector<bool>> visit;

void dfs(int x, int y) {
	if (v[x][y] == '-' && y + 1 < b && v[x][y + 1] == '-' && !visit[x][y + 1]) {
		visit[x][y + 1] = true;
		dfs(x, y + 1);
	}
	else if (v[x][y] == '|' && x + 1 < a && v[x + 1][y] == '|' && !visit[x + 1][y]) {
		visit[x + 1][y] = true;
		dfs(x + 1, y);
	}
}

int main()
{	
	cin >> a >> b;
	v.resize(a);
	visit.resize(a, vector<bool>(b, false));
	

	for (int i = 0; i < a; i++) {
		cin >> v[i];
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (!visit[i][j]) {
				visit[i][j] = true;
				cnt++;
				dfs(i, j);
			}
		}
	}

	cout << cnt;

	return 0;
}