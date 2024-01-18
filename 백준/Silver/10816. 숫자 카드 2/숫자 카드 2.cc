#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, m, nn, mm, r = 0;
	vector<long long> n_card;
	map<long long, long long> c_map;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long x;
		cin >> x;
		if (c_map.size() == 0)
		{
			c_map.insert({x, 1});
		}
		else
		{
			//중복 값이 있을 때
			if (c_map.find(x) != c_map.end())
			{
				c_map[x]++;
			}
			//중복 값이 없을 때
			else
				c_map.insert({ x, 1 });
		}
		n_card.push_back(x);
	}
	sort(n_card.begin(), n_card.end());

	cin >> m;
	vector<pair<long long, long long>> result;

	for (int i = 0; i < m; i++)
	{
		long long x;
		cin >> x;
		if (binary_search(n_card.begin(), n_card.end(), x))
		{
			result.push_back({ x, 1 });
		}
		else
			result.push_back({ x, 0 });
	}
	for (int i = 0; i < m; i++)
	{
		if (result[i].second != 0)
			cout << c_map[result[i].first] << " ";
		else
			cout << "0 ";
	}
	
	return 0;
}
