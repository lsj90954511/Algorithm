#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> st;
	int n;
	cin >> n;
	while (n--)
	{
		int order;
		cin >> order;
		if (order == 1)
		{
			int x;
			cin >> x;
			st.push_back(x);
		}
		else if (order == 2)
		{
			if (st.size() == 0)
				cout << "-1\n";
			else
			{
				cout << st[st.size() - 1] << '\n';
				st.erase(st.end() - 1);
			}
		}
		else if (order == 3)
			cout << st.size() << '\n';
		else if (order == 4)
		{
			if (st.size() == 0)
				cout << "1\n";
			else
				cout << "0\n";
		}
		else
		{
			if (st.size() == 0)
				cout << "-1\n";
			else
				cout << st[st.size() - 1] << '\n';
		}
	}

	return 0;
}