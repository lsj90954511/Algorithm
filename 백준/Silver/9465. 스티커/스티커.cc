#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[2][100001];
	arr[0][0] = arr[1][0] = 0;
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> arr[i][j];
			}
		}

		for (int i = 2; i <= n; i++)
		{
			arr[0][i] = max(arr[1][i - 1], arr[1][i - 2]) + arr[0][i];
			arr[1][i] = max(arr[0][i - 1], arr[0][i - 2]) + arr[1][i];
		}
		cout << max(arr[0][n], arr[1][n]) << '\n';
	}

	return 0;
}