#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s, result;
	vector<int> v;
	cin >> s;

	int cnt = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'X')
			cnt++;
		if (s[i] == '.' || i == s.length() - 1 && cnt != 0)
		{
			if (cnt % 2 == 0)
			{
				while (cnt / 4 != 0)
				{
					result += "AAAA";
					cnt -= 4;
				}
				while (cnt / 2 != 0)
				{
					result += "BB";
					cnt -= 2;
				}
			}
			else
			{
				cout << "-1\n";
				return 0;
			}
		}
		if (s[i] == '.')
			result += ".";
	}

	cout << result << "\n";

	return 0;
}