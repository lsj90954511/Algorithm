#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, s, e, max = 0, one = 0, no_fight = 0, no_fight_max = 0, long_stay = 0;
	char c;
	int arr_t[368] = { 0 }, arr_s[368] = { 0 };

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> c >> s >> e;
		if (e - s + 1 > long_stay)
			long_stay = e - s + 1;
		if (c == 'T')
		{
			for (int j = s; j <= e; j++)
			{
				arr_t[j]++;
			}
		}
		else if (c == 'S')
		{
			for (int j = s; j <= e; j++)
			{
				arr_s[j]++;
			}
		}
	}

	for (int i = 1; i <= 366; i++)
	{
		if (arr_t[i] + arr_s[i] > max)
			max = arr_t[i] + arr_s[i];
		if (arr_t[i] >= 1 || arr_s[i] >= 1)
			one++;
		if (arr_t[i] == arr_s[i] && arr_t[i] != 0)
		{
			no_fight++;
			if (arr_t[i] + arr_s[i] > no_fight_max)
				no_fight_max = arr_t[i] + arr_s[i];
		}
	}

	cout << one << "\n" << max << "\n" << no_fight << "\n" << no_fight_max << "\n" << long_stay;

	return 0;
}
