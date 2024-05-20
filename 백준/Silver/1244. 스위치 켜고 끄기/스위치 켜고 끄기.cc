#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b)
{
	if (a < b)
		return GCD(b, a);
	if (a % b == 0)
		return b;
	else
		return GCD(b, a % b);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, student;
	cin >> n;
	vector<int> v(n + 1, -1);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	cin >> student;
	while (student--)
	{
		int gender, sw;
		cin >> gender >> sw;
		if (gender == 1)
		{
			for (int i = sw; i <= n; i=i+sw)
			{
				v[i] = v[i] == 1 ? 0 : 1;
			}
		}
		else
		{
			int left = sw, right = sw, idx_a = sw, idx_b = sw;
			while (left > 1 && right < n)
			{
				left = left - 1;
				right = right + 1;
				if (v[left] == v[right])
				{
					idx_a = left;
					idx_b = right;
				}
				else
					break;
			}
			for (int i = idx_a; i <= idx_b; i++)
			{
				v[i] = v[i] == 1 ? 0 : 1;
			}
		}
	}

	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		cout << v[i] << " ";
		cnt++;
		if (cnt == 20)
		{
			cout << '\n';
			cnt = 0;
		}
	}

	return 0;
}