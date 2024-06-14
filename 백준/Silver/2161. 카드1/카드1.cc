#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	queue<int> q;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	while (!q.empty())
	{
		int x;
		x = q.front();
		q.pop();
		cout << x << " ";
		if (q.empty())
			break;
		int temp;
		temp = q.front();
		q.pop();
		q.push(temp);
	}

	return 0;
}