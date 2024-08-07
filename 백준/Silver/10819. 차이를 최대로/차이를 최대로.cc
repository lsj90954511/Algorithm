#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n, result = -1000;
int arr[9];
bool visit[9] = { false };
vector<int> v;

int max(int a, int b)
{
	return a > b ? a : b;
}

void dfs(int x)
{
	if (x == n)
	{
		int sum = 0;
		for (int i = 0; i < n - 1; i++)
		{
			sum += abs(v[i] - v[i + 1]);
		}
		result = max(result, sum);
		return;
	}
	for (int i = 0; i < n; i++)
	{
		if (visit[i] == false)
		{
			visit[i] = true;
			v.push_back(arr[i]);

			dfs(x + 1);

			visit[i] = false;
			v.pop_back();
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	dfs(0);
	cout << result;

	return 0;
}
