#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, cnt = 0;
	int arr[1001] = { 0 };
	cin >> n >> k;

	for (int i = 2; i <= n; i++)
	{
		arr[i] = i;
	}
	for (int i = 2; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			if (j % i == 0 && arr[j] != 0)
			{
				arr[j] = 0;
				cnt++;
			}
			if (cnt == k)
			{
				cout << j;
				return 0;
			}
		}
	}

	return 0;
}