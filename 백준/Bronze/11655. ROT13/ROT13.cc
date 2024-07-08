#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s, result;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			if (s[i] + 13 <= 90)
				result += s[i] + 13;
			else
				result += s[i] + 13 - 90 + 64;
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			if (s[i] + 13 <= 122)
				result += s[i] + 13;
			else
				result += s[i] + 13 - 122 + 96;
		}
		else
			result += s[i];
	}

	cout << result;

	return 0;
}