#include <iostream>
using namespace std;

int main()
{
	int t, n, arr[12];
	cin >> t;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= 11; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << arr[n] << "\n";
	}

	return 0;
}