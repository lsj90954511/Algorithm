#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool desc(int a, int b)
{
	return a > b;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, idx = 0;
	bool first = true;
	int arr[10001];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 1; i--)
	{
		if (arr[i] < arr[i - 1])
		{
			idx = i;
			for (int j = i; j < n; j++)
			{
				if (arr[j] > arr[idx] && arr[j] < arr[i - 1])
				{
					idx = j;
				}
			}
			int temp = arr[i - 1];
			arr[i - 1] = arr[idx];
			arr[idx] = temp;
			sort(arr + i, arr + n, desc);
			first = false;
			break;
		}
	}
	if (first)
		cout << "-1";
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
	}
	

	return 0;
}