#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back({ x, i });
	}
	sort(v.begin(), v.end());
	vector<int> p(n);
	for (int i = 0; i < n; i++)
	{
		p[v[i].second] = i;
	}
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << ' ';
	}
	

	return 0;
}