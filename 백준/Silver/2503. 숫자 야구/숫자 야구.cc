#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num, strike, ball, ans = 0;
	int fail[1000] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num >> strike >> ball;
		string num_str = to_string(num);
		for (int j = 123; j < 988; j++)
		{
			string comp = to_string(j);
			if (fail[j] == 1)
				continue;
			int strike_cnt = 0, ball_cnt = 0;
			for (int k = 0; k < 3; k++)
			{
				for (int s = 0; s < 3; s++)
				{
					if (num_str[k] == comp[s])
						if (k == s)
							strike_cnt++;
						else
							ball_cnt++;
				}
			}
			if (strike_cnt != strike || ball_cnt != ball)
				fail[j] = 1;
		}
	}

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (i == j)
				continue;
			for (int k = 1; k < 10; k++)
			{
				if (i == k || j == k)
					continue;
				int temp = i * 100 + j * 10 + k;
				if (fail[temp] == 0)
				{
					ans++;
				}
			}
		}
	}

	cout << ans;

	return 0;
}