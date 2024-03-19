#include <iostream>
using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int arr[1001][3] = { 0 };
	int dist[1001][3] = { 0 };
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		dist[i][0] = min(dist[i - 1][1], dist[i - 1][2]) + arr[i][0];
		dist[i][1] = min(dist[i - 1][0], dist[i - 1][2]) + arr[i][1];
		dist[i][2] = min(dist[i - 1][1], dist[i - 1][0]) + arr[i][2];
	}
	
	cout << min(min(dist[n][0], dist[n][1]), dist[n][2]) << "\n";

	return 0;
}
