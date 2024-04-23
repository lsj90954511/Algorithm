#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int arr[10001];

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = n - 1; i > 0; i--)
	{
		if (arr[i - 1] < arr[i])
		{
			for (int j = n - 1; j > 0; j--)
			{
				if (arr[i - 1] < arr[j])
				{
					int temp = arr[i - 1];
					arr[i - 1] = arr[j];
					arr[j] = temp;
					sort(arr + i, arr + n);

					for (int k = 0; k < n; k++)
					{
						cout << arr[k] << " ";
					}
					return 0;
				}
			}
		}
	}

	cout << "-1";

	return 0;
}