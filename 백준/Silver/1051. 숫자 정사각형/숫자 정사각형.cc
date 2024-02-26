#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, result = 1;
	int arr[51][51];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			arr[i][j] = s[j] - '0';
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int cnt = 0;
			for (int k = 1;; k++)
			{
				if ((i + k) >= n || (j + k) >= m)
					break;
				if (arr[i][j] == arr[i + k][j] && arr[i][j] == arr[i][j + k] && arr[i][j] == arr[i + k][j + k])
				{
					if (cnt < k)
						cnt = k;
				}
			}
			if (cnt > result - 1)
			{
				result = cnt + 1;
			}
		}
	}

	cout << result * result;

	return 0;
}
