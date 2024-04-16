#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int input[10], arr[10];

void bt(int start, int dep)
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

	for (int i = 0; i < n; i++)
	{
		arr[dep] = input[i];
		bt(i + 1, dep + 1);
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> input[i];
	}
	sort(input, input + n);

	bt(0, 0);

	return 0;
}