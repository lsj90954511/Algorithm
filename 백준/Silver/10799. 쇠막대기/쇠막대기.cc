#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int ans = 0;
	string s;
	stack<char> st;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
			st.push('(');
		else if (s[i] == ')')
		{
			if (s[i - 1] == '(')
			{
				st.pop();
				ans += st.size();
			}
			else
			{
				st.pop();
				ans++;
			}
		}
	}

	cout << ans;

	return 0;
}