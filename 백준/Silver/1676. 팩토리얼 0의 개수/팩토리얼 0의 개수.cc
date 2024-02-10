#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cnt = 0, arr[500];
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		arr[i] = i;
		for (int j = 1; j <= n; j++)
		{
			if (arr[i] % 5 == 0)
			{
				arr[i] /= 5;
				cnt++;
			}
		}
	}
	cout << cnt;

	return 0;
}