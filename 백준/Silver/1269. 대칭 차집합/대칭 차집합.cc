#include <iostream>
#include <set>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	set<int> s;

	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}

	cout << s.size() - n + s.size() - m;

	return 0;
}