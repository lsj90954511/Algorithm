#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;
	cin >> t;
	string s, x, temp;
	deque<int> d;
	bool reverse = false, error = false;

	while (t--)
	{
		reverse = false;
		error = false;
		cin >> s >> n >> x;
		int num = 0;
		for (int i = 0; i < x.length(); i++)
		{
			if (isdigit(x[i]))
				temp += x[i];
			else
			{
				if (temp != "")
					d.push_back(stoi(temp));
				temp = "";
			}

		}
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'R')
			{
				if (reverse)
					reverse = false;
				else
					reverse = true;
			}
			else
			{
				if (d.empty())
				{
					cout << "error";
					error = true;
					break;
				}
				if (reverse)
					d.pop_back();
				else
					d.pop_front();
			}
		}
		if (!error)
		{
			if (d.size() == 0)
			{
				cout << "[]";
			}
			else
			{
				while (!d.empty())
				{
					if (reverse)
					{
						if (num == 0)
							cout << "[";
						int r = d.back();
						d.pop_back();
						cout << r;
						num++;
						if (d.size() == 0)
							cout << "]";
						else
							cout << ",";
					}
					else
					{
						if (num == 0)
							cout << "[";
						int r = d.front();
						d.pop_front();
						cout << r;
						num++;
						if (d.size() == 0)
							cout << "]";
						else
							cout << ",";
					}
				}
			}
		}
		
		cout << "\n";
	}

	return 0;
}
