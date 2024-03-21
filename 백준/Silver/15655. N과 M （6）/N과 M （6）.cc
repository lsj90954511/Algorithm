#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int n, m;
int arr[10], input[10];

void bfs(int a, int dep)
{
	if (dep == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = a; i < n; i++)
	{
		arr[dep] = input[i];
		bfs(i + 1, dep + 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}
	sort(input, input + n);
	bfs(0, 0);

	return 0;
}