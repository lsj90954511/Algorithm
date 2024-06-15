#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt = 0;
	string sentence, word;
	getline(cin, sentence);
	getline(cin, word);
	if (sentence.length() < word.length())
	{
		cout << "0";
		return 0;
	}

	for (int i = 0; i <= sentence.length() - word.length(); i++)
	{
		if (sentence[i] == word[0])
		{
			if (sentence.substr(i, word.length()) == word)
			{
				cnt++;
				i = i + word.length() - 1;
			}
		}
	}

	cout << cnt;

	return 0;
}