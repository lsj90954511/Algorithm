#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num;
	cin >> n >> num;
	vector<vector<int>> v(n, vector<int>(n));
	int dx[4] = { 0, 1, 0, -1 };
	int dy[4] = { 1, 0, -1, 0 };

	int r = n / 2;
	int x = n / 2, y = n / 2;
	int cnt = 1;
	v[x][y] = cnt;

	for (int i = 1; i <= r; i++)
	{
		x--;
		for (int j = 0; j < 4; j++)
		{
			for (int k = 1; k <= i * 2; k++)
			{
				if (j == 0 && k == 1)
				{
					v[x][y] = ++cnt;
					continue;
				}
				x += dx[j];
				y += dy[j];
				v[x][y] = ++cnt;
			}
		}
	}
	int num_x, num_y;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << v[i][j] << " ";
			if (v[i][j] == num)
			{
				num_x = i;
				num_y = j;
			}
		}
		cout << '\n';
	}
	cout << num_x + 1 << " " << num_y + 1;

	return 0;
}