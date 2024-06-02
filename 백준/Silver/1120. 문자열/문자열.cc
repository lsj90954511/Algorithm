#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string a, b;
	int min = 51;
	cin >> a >> b;
	for (int i = 0; i <= b.length() - a.length(); i++)
	{
		int cnt = 0;
		for (int j = 0; j < a.length(); j++)
		{
			string temp = b.substr(i, i + a.length());
			if (a[j] != temp[j])
			{
				cnt++;
			}
		}
		if (cnt < min)
		{
			min = cnt;
		}
	}

	cout << min;

	return 0;
}