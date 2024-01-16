#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x, size = 0;
	vector<int> v;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		if (s == "push_front" || s == "push_back")
		{
			cin >> x;
			if (s == "push_front")
			{
				v.insert(v.begin(), x);
				size++;
			}
			else
			{
				v.push_back(x);
				size++;
			}
		}
		else if (s == "pop_front")
		{
			if (size == 0)
				cout << "-1\n";
			else
			{
				cout << v.front() << "\n";
				v.erase(v.begin(), v.begin() + 1);
				size--;
			}
		}
		else if (s == "pop_back")
		{
			if (size == 0)
				cout << "-1\n";
			else
			{
				cout << v.back() << "\n";
				v.pop_back();
				size--;
			}
		}
		else if (s == "size")
		{
			cout << size << "\n";
		}
		else if (s == "empty")
		{
			if (size == 0)
				cout << "1\n";
			else
				cout << "0\n";
		}
		else if (s == "front")
		{
			if (size == 0)
				cout << "-1\n";
			else
				cout << v.front() << "\n";
		}
		else
		{
			if (size == 0)
				cout << "-1\n";
			else
				cout << v.back() << "\n";
		}
	}

	return 0;
}
