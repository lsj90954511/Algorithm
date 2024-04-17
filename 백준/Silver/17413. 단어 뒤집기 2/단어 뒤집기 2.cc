#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	getline(cin, s);
	stack<char> st;
	bool tag = false;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '<')
		{
			tag = true;
			while (!st.empty())
			{
				cout << st.top();
				st.pop();
			}
		}

		if (tag)
			cout << s[i];
		else
		{
			if (s[i] == ' ')
			{
				while (!st.empty())
				{
					cout << st.top();
					st.pop();
				}
				cout << ' ';
			}
			else
				st.push(s[i]);
		}

		if (s[i] == '>')
			tag = false;
	}
	while (!st.empty())
	{
		cout << st.top();
		st.pop();
	}

	return 0;
}