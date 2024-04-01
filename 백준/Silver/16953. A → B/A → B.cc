#include <iostream>
#include <queue>
using namespace std;

long long a, b, ans;
queue<pair<int, int>> q;
int arr[10], nums[10];

void bfs()
{
	while (!q.empty())
	{
		long long n = q.front().first;
		long long cnt = q.front().second;
		q.pop();

		if (n == b)
		{
			ans = cnt;
			break;
		}

		if (n * 2 <= b)
			q.push({ n * 2, cnt + 1 });
		if (n * 10 + 1 <= b)
			q.push({ n * 10 + 1, cnt + 1 });
		if (n * 2 > b && n * 10 + 1 > b)
			ans = -1;
	}
}
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> a >> b;
	q.push({ a, 1 });
	bfs();
	cout << ans << "\n";

	return 0;
}