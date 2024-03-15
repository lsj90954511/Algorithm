#include <iostream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

int a, b;
int visit[10000];

void bfs()
{
	queue<pair<int, string>> q;
	q.push({ a, "" });
	visit[a] = 1;

	while (!q.empty())
	{
		int num = q.front().first;
		string op = q.front().second;
		q.pop();

		if (num == b)
		{
			cout << op << "\n";
			return;
		}

		int d, s, l, r;

		d = num * 2 % 10000;
		if (visit[d] == 0)
		{
			visit[d] = 1;
			q.push({ d, op + "D" });
		}

		s = num == 0 ? 9999 : num - 1;
		if (visit[s] == 0)
		{
			visit[s] = 1;
			q.push({ s, op + "S" });
		}

		l = num % 1000 * 10 + num / 1000;
		if (visit[l] == 0)
		{
			visit[l] = 1;
			q.push({ l, op + "L" });
		}

		r = num % 10 * 1000 + num / 10;
		if (visit[r] == 0)
		{
			visit[r] = 1;
			q.push({ r, op + "R" });
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		bfs();
		memset(visit, 0, sizeof(visit));
	}
	

	return 0;
}
