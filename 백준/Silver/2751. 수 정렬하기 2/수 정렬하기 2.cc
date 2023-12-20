#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int arr[1000001];

void merge(int a, int b)
{
	int mid = (a + b) / 2;
	int i = a, j = mid + 1, k = a;
	while (i <= mid && j <= b)
	{
		if (v[i] <= v[j])
			arr[k++] = v[i++];
		else
			arr[k++] = v[j++];
	}
	int tmp = i > mid ? j : i;
	while (k <= b)
		arr[k++] = v[tmp++];
	for (int i = a; i <= b; i++)
		v[i] = arr[i];
}

void partition(int a, int b)
{
	int mid;
	if (a < b)
	{
		mid = (a + b) / 2;
		partition(a, mid);
		partition(mid + 1, b);
		merge(a, b);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}

	if (n == 1)
	{
		cout << v[0] << "\n";
		return 0;
	}

	partition(0, n - 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << "\n";

	return 0;
}