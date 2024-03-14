#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t, k;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		multiset<int> q;
		char c;
		int n, cnt = 0;
		cin >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> c >> n;
			if (c == 'I')
			{
				q.insert(n);
			}
			else if (c == 'D')
			{
				if (q.empty())
					continue;
				if (n == 1)
				{
					auto iter = q.end();
					iter--;
					q.erase(iter);
				}
				else
				{
					q.erase(q.begin());
				}
			}
		}
		if (q.empty())
			cout << "EMPTY\n";
		else
		{
			auto iter = q.end();
			iter--;
			cout << *iter << " " << *q.begin() << "\n";
		}
	}
	

	return 0;
}
