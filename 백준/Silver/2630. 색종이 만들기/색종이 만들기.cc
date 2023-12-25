#include <iostream>
#include <vector>
using namespace std;

int w = 0, b = 0;

void paper(vector<vector<int>> v, int x, int y, int n)
{
	bool ww = true, bb = true;
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (v[i][j] == 0)
				bb = false;
			if (v[i][j] == 1)
				ww = false;
		}
	}
	if (ww)
	{
		w++;
		return;
	}
	if (bb)
	{
		b++;
		return;
	}
	paper(v, x, y, n / 2);
	paper(v, x, y + n / 2, n / 2);
	paper(v, x + n / 2, y, n / 2);
	paper(v, x + n / 2, y + n / 2, n / 2);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<vector<int>> v(n);
	for (int i = 0; i < n; i++)
	{
		v[i] = vector<int>(n);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> v[i][j];
		}
	}
	paper(v, 0, 0, n);

	cout << w << "\n" << b << "\n";

	return 0;
}