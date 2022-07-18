#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int n, m;
	string find, address, password;
	map<string, string> map;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> address >> password;
		map.insert({ address, password });
	}
	for (int i = 0; i < m; i++)
	{
		cin >> find;
		cout << map[find] << "\n";
	}

	return 0;
}