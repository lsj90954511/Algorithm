#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[10], nums[10];

void func(int a, int cnt)
{
	if (m == cnt)
	{
		for (int i = 0; i < m; i++)
		{
			cout << nums[i] << " ";
		}
		cout << "\n";
		return;
	}
	int x = 0;
	for (int i = a; i < n; i++)
	{
		if (arr[i] != x)
		{
			nums[cnt] = arr[i];
			x = nums[cnt];
			func(i, cnt + 1);
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	func(0, 0);

	return 0;
}