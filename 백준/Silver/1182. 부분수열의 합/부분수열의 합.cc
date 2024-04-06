#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, s, cnt = 0;
vector<int> v;

void back(int len, int start, int sum)
{
	if (len >= 1 && sum == s)
		cnt++;
	if (len > n)
		return;
	for (int i = start + 1; i < n; i++)
	{
		back(len + 1, i, sum + v[i]);
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> s;
	v.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	back(0, -1, 0);

	cout << cnt << '\n';

	return 0;
}