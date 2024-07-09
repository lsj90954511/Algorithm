#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k;
	cin >> n >> m;
	vector<vector<int>> v1(n, vector<int> (m));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> v1[i][j];
		}
	}

	cin >> m >> k;
	vector<vector<int>> v2(m, vector<int>(k));

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cin >> v2[i][j];
		}
	}

	vector<vector<int>> result(n, vector<int>(k));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			int temp = 0;
			for (int a = 0; a < m; a++)
			{
				temp += v1[i][a] * v2[a][j];
			}
			result[i][j] = temp;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}