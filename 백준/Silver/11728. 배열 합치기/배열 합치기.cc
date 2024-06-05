#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	vector<int> v;
	cin >> n >> m;
	for (int i = 0; i < n + m; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n + m; i++)
	{
		cout << v[i] << " ";
	}

	return 0;
}