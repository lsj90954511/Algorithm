#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	bool b = false;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int hap = i;
		string s = to_string(i);
		for (int j = 0; j < s.length(); j++)
		{
			hap += s[j] - '0';
		}
		if (hap == n)
		{
			b = true;
			cout << i;
			break;
		}
	}
	if (!b)
		cout << "0";

	return 0;
}