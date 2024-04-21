#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	deque<pair<int, int>> dq;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		dq.push_back({ i + 1, x });
	}

	bool rev = false;
	while (!dq.empty())
	{
		int r, x;
		if (!rev)
		{
			r = dq.front().first;
			x = dq.front().second;
			cout << r << " ";
			dq.pop_front();
		}
		else
		{
			r = dq.back().first;
			x = dq.back().second;
			cout << r << " ";
			dq.pop_back();
		}
		if (dq.empty())
			break;

		if (x > 0)
		{
			for (int i = 0; i < x - 1; i++)
			{
				pair<int, int> temp = dq.front();
				dq.pop_front();
				dq.push_back(temp);
			}
			rev = false;
		}
		else
		{
			for (int i = 0; i < -1 * x - 1; i++)
			{
				pair<int, int> temp = dq.back();
				dq.pop_back();
				dq.push_front(temp);
			}
			rev = true;
		}
	}

	return 0;
}