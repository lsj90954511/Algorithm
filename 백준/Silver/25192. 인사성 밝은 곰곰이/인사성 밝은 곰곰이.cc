#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, cnt = 0;
	set<string> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (str == "ENTER")
		{
			cnt += s.size();
			s.clear();
			continue;
		}
		s.insert(str);
	}
	cnt += s.size();

	cout << cnt;

	return 0;
}