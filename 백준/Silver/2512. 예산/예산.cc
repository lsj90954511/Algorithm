#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, hap = 0;
	int arr[10001];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		hap += arr[i];
	}
	cin >> m;

	sort(arr, arr + n);
	if (hap <= m)
	{
		cout << arr[n - 1];
		return 0;
	}

	int left = 0, right = arr[n - 1], result;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		int idx = lower_bound(arr, arr + n, mid) - arr;
		int sum = 0;

		for (int i = 0; i < idx; i++)
		{
			sum += arr[i];
		}
		sum += (mid * (n - idx));
		if (m >= sum)
		{
			result = mid;
			left = mid + 1;
		}

		if (sum > m)
			right = mid - 1;
		else
		{
			left = mid + 1;
			result = mid;
		}
	}
	cout << result;

	return 0;
}