#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	queue<int> q;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	cout << "<";
	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			int x = q.front();
			q.pop();
			q.push(x);
		}
		if (q.size() == 1)
		{
			cout << q.front() << ">";
			q.pop();
		}
		else
		{
			cout << q.front() << ", ";
			q.pop();
		}
	}
	
	return 0;
}
