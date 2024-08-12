#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while (true)
	{
		int consonants = 0, vowels = 0;
		bool haveVowels = false, isAcceptable = true;
		string s;
		cin >> s;
		if (s == "end")
			break;

		for(int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			{
				haveVowels = true;
				vowels++;
				consonants = 0;
			}
			else
			{
				consonants++;
				vowels = 0;
			}
			if (consonants >= 3 || vowels >= 3)
			{
				isAcceptable = false;
				break;
			}
			if ((i < s.length() - 1) && s[i] == s[i + 1] && s[i] != 'e' && s[i] != 'o')
			{
				isAcceptable = false;
				break;
			}
		}
		if (!haveVowels)
			isAcceptable = false;

		if (isAcceptable)
			cout << "<" << s << "> is acceptable.\n";
		else
			cout << "<" << s << "> is not acceptable.\n";
	}

	return 0;
}
