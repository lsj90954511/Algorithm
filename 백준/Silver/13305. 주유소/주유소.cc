#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	long long result = 0;
	vector<long long> cost, dist;
	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		int x;
		cin >> x;
		dist.push_back(x);
	}
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		cost.push_back(x);
	}
	result += cost[0] * dist[0];
	long long min_cost = 1000000001;
	for (int i = 1; i < n - 1; i++)
	{
		if (cost[i] <= min_cost)
			min_cost = cost[i];
		result += min_cost * dist[i];
	}

	cout << result;

	return 0;
}