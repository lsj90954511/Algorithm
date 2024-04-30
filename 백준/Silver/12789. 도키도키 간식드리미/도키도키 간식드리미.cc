#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, cnt = 1;
	stack<int> st1, st2;
	int arr[1001];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = n - 1; i >= 0; i--)
	{
		st1.push(arr[i]);
	}
	while(true)
	{
		if (st1.empty() && st2.empty())
		{
			cout << "Nice";
			break;
		}
		if (!st1.empty())
		{
			if (st1.top() == cnt)
			{
				st1.pop();
				cnt++;
				continue;
			}
			else
			{
				if (!st2.empty() && st2.top() == cnt)
				{
					st2.pop();
					cnt++;
					continue;
				}
				while (!st1.empty() && st1.top() != cnt)
				{
					int temp = st1.top();
					st1.pop();
					st2.push(temp);
				}
				if (st1.empty())
				{
					cout << "Sad";
					return 0;
				}
				st1.pop();
				cnt++;
			}
		}
		else
		{
			if (!st2.empty() && st2.top() == cnt)
			{
				st2.pop();
				cnt++;
			}
			else
			{
				cout << "Sad";
				return 0;
			}
		}
	}

	return 0;
}