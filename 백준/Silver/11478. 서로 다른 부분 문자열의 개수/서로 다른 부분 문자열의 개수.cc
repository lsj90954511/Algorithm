#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	set<string> set_;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			string temp = s.substr(j, i - j + 1);
			set_.insert(temp);
		}
	}

	cout << set_.size();

	return 0;
}