#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int result = 1;
		cin >> n;
		string name, type;
		map<string, int> c;
		for (int j = 0; j < n; j++)
		{
			cin >> name >> type;
			if (c.find(type) == c.end()) //새로운 종류
			{
				c.insert({ type, 1 });
			}
			else //이미 있는 종류
			{
				c[type]++;
			}
		}
		for (map<string, int>::iterator iter = c.begin(); iter != c.end(); iter++)
		{
			result *= iter->second + 1;
		}
		cout << result - 1 << "\n";
	}
}