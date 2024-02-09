#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	priority_queue<unsigned long long, vector<unsigned long long>, greater<unsigned long long>> q;
	cin >> n;
	while (n--)
	{
		unsigned long long x;
		cin >> x;
		if (x != 0)
			q.push(x);
		else
		{
			if (q.empty())
				cout << "0\n";
			else
			{
				unsigned long long y = q.top();
				cout << y << "\n";
				q.pop();
			}
		}
	}

	return 0;
}