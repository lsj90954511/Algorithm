#include <iostream>
#include <set>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	set<int> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << " ";
	}

	return 0;
}