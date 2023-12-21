#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, string>> members;

	for (int i = 0; i < n; i++)
	{
		pair<int, string> p;
		cin >> p.first >> p.second;
		members.push_back(p);
	}

	stable_sort(members.begin(), members.end(),
		[](auto a, auto b) { return a.first < b.first; });

	for (int i = 0; i < n; i++)
	{
		cout << members[i].first << " " << members[i].second << "\n";
	}

	return 0;
}