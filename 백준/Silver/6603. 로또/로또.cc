#include <iostream>
#include <string>
#include <stack>
using namespace std;

int k;
int input[14], arr[14], visit[14] = { 0 };

void dfs(int start, int dep)
{
	if (dep == 6)
	{
		for (int i = 0; i < 6; i++)
			cout << arr[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = start; i < k; i++)
	{
		arr[dep] = input[i];
		dfs(i + 1, dep + 1);
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	while (true)
	{
		cin >> k;
		if (k == 0)
			break;
		for (int i = 0; i < k; i++)
		{
			cin >> input[i];
		}
		dfs(0, 0);
		cout << "\n";
	}

	return 0;
}