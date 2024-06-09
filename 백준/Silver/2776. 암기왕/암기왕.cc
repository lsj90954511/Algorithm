#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n, m;
	cin >> t;
	while (t--)
	{
		cin >> n;
		map<int, int> _map;
		for (int i = 0; i < n; i++)
		{
			int num;
			cin >> num;
			_map[num] = 1;
		}
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			int num;
			cin >> num;
			if (_map[num] == 1)
				cout << "1\n";
			else
				cout << "0\n";
		}
	}

	return 0;
}