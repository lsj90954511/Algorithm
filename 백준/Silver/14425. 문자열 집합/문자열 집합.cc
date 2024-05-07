#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, result = 0;
	cin >> n >> m;
	set<string> s;
	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		s.insert(temp);
	}
	for (int i = 0; i < m; i++)
	{
		string temp;
		cin >> temp;
		if (s.find(temp) != s.end())
			result++;
	}

	cout << result;

	return 0;
}