#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main()
{
	int t, n, m;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int result = 0;
		cin >> n >> m; //문서 개수, 문서 순서 입력
		priority_queue <int> pq;
		queue <pair<int, int>> q;
		for (int j = 0; j < n; j++)
		{
			int x;
			cin >> x; //중요도 입력
			q.push({ x, j }); //중요도, 인덱스
			pq.push(x);
		}
		while (!q.empty())
		{
			int value, index;
			value = q.front().first;
			index = q.front().second;
			q.pop();
			if (pq.top() == value)
			{
				pq.pop();
				result++;
				if (m == index)
				{
					cout << result << endl;
					break;
				}
			}
			else
			{
				q.push({ value, index });
			}
		}
	}

	return 0;
}
