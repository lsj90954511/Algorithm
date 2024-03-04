#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

struct cmp
{
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b;//최소값이 루트에 위치하도록
		return abs(a) > abs(b);
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, x;
	priority_queue<int, vector<int>, cmp> q;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 0)
		{
			if (q.empty())
				cout << "0\n";
			else
			{
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else
		{
			q.push(x);
		}
	}

	return 0;
}
