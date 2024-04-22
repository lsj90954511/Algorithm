#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, ans;
	int odd = 0;
	int alphabet[27] = { 0 };
	bool passible = true;
	char odd_char;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		alphabet[s[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alphabet[i] % 2 != 0)
		{
			odd++;
			odd_char = i + 'A';
		}
		if (odd >= 2)
		{
			passible = false;
			break;
		}
	}

	if (!passible)
	{
		cout << "I'm Sorry Hansoo";
		return 0;
	}

	if (odd == 0)
	{
		for (int i = 0; i < 26; i++)
		{
			if (alphabet[i] == 0)
				continue;
			for (int j = 0; j < alphabet[i] / 2; j++)
			{
				ans += i + 'A';
			}
		}
		string rev = ans;
		reverse(rev.begin(), rev.end());
		ans += rev;
	}
	else
	{
		for (int i = 0; i < 26; i++)
		{
			if (alphabet[i] == 0)
				continue;
			for (int j = 0; j < alphabet[i] / 2; j++)
			{
				ans += i + 'A';
			}
		}
		string rev = ans;
		reverse(rev.begin(), rev.end());
		ans = ans + odd_char + rev;
	}

	cout << ans;

	return 0;
}