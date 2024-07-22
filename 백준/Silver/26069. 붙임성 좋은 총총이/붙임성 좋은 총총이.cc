#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, cnt = 0;
	cin >> n;
	map<string, bool> m;

	while (n--)
	{
		string s1, s2;
		cin >> s1 >> s2;

		if (s1 == "ChongChong")
			m.insert({ s1, true });
		else if (s2 == "ChongChong")
			m.insert({ s2, true });

		if (m[s1])
			m[s2] = true;
		if (m[s2])
			m[s1] = true;
	}

	for (auto& val : m)
	{
		if (val.second)
			cnt++;
	}

	cout << cnt;

	return 0;
}