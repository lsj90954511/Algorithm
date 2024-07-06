#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cin.ignore();

	for (int t = 0; t < n; t++)
	{
		string input;
		getline(cin, input);

		string s;

		for (int i = 0; i < input.length(); i++)
		{
			if (input[i] != ' ')
				s += input[i];

			if (input[i] == ' ' || i == input.length() - 1)
			{
				for (int j = s.length() - 1; j >= 0; j--)
				{
					cout << s[j];
				}
				cout << " ";
				s = "";
				continue;
			}
		}
		cout << "\n";
	}

	return 0;
}