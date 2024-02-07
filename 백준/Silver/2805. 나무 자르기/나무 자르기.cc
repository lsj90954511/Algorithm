#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n, m;
vector<long long> tree;
long long max(long long a, long long b)
{
	return a > b ? a : b;
}
bool check(long long a)
{
	long long len = 0;
	for (int i = 0; i < tree.size(); i++)
	{
		if (tree[i] - a > 0)
			len += tree[i] - a;
	}
	if (len >= m)
		return true;
	else
		return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long  result = 0;
	
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		tree.push_back(x);
	}
	sort(tree.begin(), tree.end());

	long long left = 0, right = tree[n - 1];
	while (left <= right)
	{
		long long mid = (left + right) / 2;
		if (check(mid))
		{
			result = max(result, mid);
			left = mid + 1;
		}
		else
			right = mid - 1;
	}

	cout << result;

	return 0;
}