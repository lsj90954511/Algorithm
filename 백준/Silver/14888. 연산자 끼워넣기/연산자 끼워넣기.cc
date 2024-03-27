#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int n;
int nums[101], op[4];
int min_n = 1000000001, max_n = -1000000001;

void dfs(int a, int dep)
{
	if (dep == n)
	{
		if (a > max_n)
			max_n = a;
		if (a < min_n)
			min_n = a;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (op[i] > 0)
		{
			op[i]--;
			if (i == 0)
				dfs(a + nums[dep], dep + 1);
			else if (i == 1)
				dfs(a - nums[dep], dep + 1);
			else if (i == 2)
				dfs(a * nums[dep], dep + 1);
			else
				dfs(a / nums[dep], dep + 1);
			op[i]++;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> op[i];
	}
	dfs(nums[0], 1);
	cout << max_n << "\n" << min_n << "\n";

	return 0;
}