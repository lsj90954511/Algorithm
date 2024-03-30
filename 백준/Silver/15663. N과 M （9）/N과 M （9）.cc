#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int arr[10], nums[10];
bool check[10];

void func(int cnt)
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
	for (int i = 0; i < n; i++)
	{
		if (!check[i] && arr[i] != x)
		{
			nums[cnt] = arr[i];
			x = nums[cnt];
			check[i] = true;
			func(cnt + 1);
			check[i] = false;
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
	func(0);

	return 0;
}