#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int n, m;
vector<string> word;
map<string, int> mp;

bool cmp(string s1, string s2)
{
	if (s1.length() == s2.length() && mp[s1] == mp[s2])
		return s1 < s2;
	else if (mp[s1] == mp[s2])
		return s1.length() > s2.length();
	return mp[s1] > mp[s2];
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s.length() < m)
			continue;
		if (mp.find(s) == mp.end())
		{
			word.push_back(s);
			mp[s] = 0;
		}
		mp[s]++;
	}

	sort(word.begin(), word.end(), cmp);

	for (int i = 0; i < word.size(); i++)
	{
		cout << word[i] << "\n";
	}

	return 0;
}