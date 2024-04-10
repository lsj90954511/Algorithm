#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, result;
	int m;
	cin >> s >> m;
	stack<char> left, right;
	for (int i = 0; i < s.length(); i++)
	{
		left.push(s[i]);
	}
	for (int i = 0; i < m; i++)
	{
		char c, x;
		cin >> c;
		if (c == 'L')
		{
			if (!left.empty())
			{
				char temp = left.top();
				left.pop();
				right.push(temp);
			}
		}
		else if (c == 'D')
		{
			if (!right.empty())
			{
				char temp = right.top();
				right.pop();
				left.push(temp);
			}
		}
		else if (c == 'B')
		{
			if (!left.empty())
			{
				left.pop();
			}
		}
		else if (c == 'P')
		{
			cin >> x;
			left.push(x);
		}
	}

	while (!left.empty())
	{
		char temp = left.top();
		left.pop();
		result += temp;
	}
	reverse(result.begin(), result.end());
	while (!right.empty())
	{
		char temp = right.top();
		right.pop();
		result += temp;
	}

	cout << result;

	return 0;
}