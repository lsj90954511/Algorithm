#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	queue<int> q;
	cin >> n;

	while (n--)
	{
		string s;
		int a;
		cin >> s;
		if (s == "push")
		{
			cin >> a;
			q.push(a);
		}
		else if (s == "pop")
		{
			if (q.empty())
				cout << "-1\n";
			else
			{
				int temp = q.front();
				q.pop();
				cout << temp << "\n";
			}
		}
		else if (s == "size")
			cout << q.size() << "\n";
		else if (s == "empty")
		{
			if (q.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (s == "front")
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.front() << "\n";
		}
		else
		{
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.back() << "\n";
		}
	}

	return 0;
}
