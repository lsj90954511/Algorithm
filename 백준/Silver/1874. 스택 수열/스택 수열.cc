#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, num = 1;
	string answer;
	vector<int> v;
	stack<int> st;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		
		while (num <= x)
		{
			st.push(num);
			num++;
			answer.append("+\n");
		}
		if (st.top() == x)
		{
			st.pop();
			answer.append("-\n");
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	cout << answer;

	return 0;
}