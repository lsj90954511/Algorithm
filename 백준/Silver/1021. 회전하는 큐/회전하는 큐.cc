#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, m, index, result = 0;
	vector<int> v;
	deque<int> dq;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	for (int i = 1; i <= n; i++)
	{
		dq.push_back(i);
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (dq[j] == v[i])
			{
				index = j;
				break;
			}		
		}
		if (index <= dq.size() / 2)
		{
			for (int k = 0; k < index; k++)
			{
				int temp = dq.front();
				dq.pop_front();
				dq.push_back(temp);
			}
			dq.pop_front();
			result += index;
		}
		else
		{
			for (int k = 0; k < dq.size() - index; k++)
			{
				int temp = dq.back();
				dq.pop_back();
				dq.push_front(temp);
			}
			result += dq.size() - index;
			dq.pop_front();
		}
	}
	cout << result;

	return 0;
}