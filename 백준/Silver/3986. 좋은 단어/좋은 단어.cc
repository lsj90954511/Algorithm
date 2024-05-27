#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		stack<char> st;
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			if (!st.empty() && st.top() == s[j])
			{
				st.pop();
			}
			else
				st.push(s[j]);
		}
		if (st.empty())
			cnt++;
	}

	cout << cnt;

	return 0;
}