#include <iostream>
#include <memory.h>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n;
	cin >> n;

	long long arr[100];
	memset(arr, -1, 100 * sizeof(long long));
	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		if (arr[i] == -1)
			arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[n];

	return 0;
}