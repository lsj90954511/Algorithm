#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	int temp = 1;
	while (temp)
	{
		int cnt = 0;
		for (int i = 0; i < 5; i++)
		{
			if (temp % arr[i] == 0)
				cnt++;
		}
		if (cnt >= 3)
		{
			cout << temp;
			break;
		}
		temp++;
	}

	return 0;
}