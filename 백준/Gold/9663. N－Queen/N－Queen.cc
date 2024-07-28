#include <iostream>
#include <cmath>
using namespace std;

int n, cnt = 0;
int arr[15];

bool promising(int cdx)
{
	for (int i = 0; i < cdx; i++)
	{
		if (arr[cdx] == arr[i] || cdx - i == abs(arr[cdx] - arr[i]))
			return false;
	}
	return true;
}

void nqueen(int cdx)
{
	if (cdx == n)
	{
		cnt++;
		return;
	}

	for (int i = 0; i < n; i++)
	{
		arr[cdx] = i;
		if (promising(cdx))
			nqueen(cdx + 1);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	nqueen(0);
	cout << cnt;

	return 0;
}

