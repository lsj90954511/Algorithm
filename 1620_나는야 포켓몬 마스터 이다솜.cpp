#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	string s;
	cin >> n >> m;
	map <int, string> pocketmon;
	map <string, int> pocketmon2;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		pocketmon.insert({ i, s });
		pocketmon2.insert({ s, i });
	}
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		if (isdigit(s[0]))//¼ıÀÚ¸é
		{
			cout << pocketmon[stoi(s)] << "\n";
		}
		else
		{
			cout << pocketmon2[s] << "\n";
		}
	}

	return 0;
}