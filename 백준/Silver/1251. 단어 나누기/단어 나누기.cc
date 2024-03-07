#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;
	vector<string> v;
	cin >> s;

	for (int i = 1; i < s.length() - 1; i++)//두번째 시작점
	{
		for (int j = i + 1; j < s.length(); j++)//세번째 시작점
		{
			string w1, w2, w3, rev;
			w1 = s.substr(0, i);
			w2 = s.substr(i, j - i);
			w3 = s.substr(j, s.length() - j + 1);

			reverse(w1.begin(), w1.end());
			reverse(w2.begin(), w2.end());
			reverse(w3.begin(), w3.end());

			rev = w1 + w2 + w3;
			v.push_back(rev);
		}
	}

	sort(v.begin(), v.end());

	cout << v[0];

	return 0;
}
