#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

set<string> s;
int n, k, result;
vector<string> v;
bool visit[10] = { false };

void dfs(string st, int cnt)
{
	if (cnt == k)
	{
		s.insert(st);
		return;
	}
	for (int i = 0; i < v.size(); i++)
	{
		if (visit[i] == false)
		{
			visit[i] = true;
			dfs(st + v[i], cnt + 1);
			visit[i] = false;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		v.push_back(x);
	}
	dfs("", 0);

	cout << s.size();

	return 0;
}