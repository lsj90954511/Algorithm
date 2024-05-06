#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	set<string, greater<string>> s;
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		if (s2 == "enter")
			s.insert(s1);
		else
			s.erase(s1);
	}

	for (auto i = s.begin(); i != s.end(); i++)
	{
		cout << *i << "\n";
	}

	return 0;
}