#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, l, cnt = 0;
	int arr[1001];
	cin >> n >> l;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] - arr[i] > l - 1)
			{
				cnt++;
				i = j - 1;
				break;
			}
		}
	}

	cout << cnt + 1;

	return 0;
}