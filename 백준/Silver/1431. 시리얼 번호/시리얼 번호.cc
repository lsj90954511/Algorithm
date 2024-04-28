#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int cmp(string a, string b)
{
	int asize = a.size();
	int bsize = b.size();
	int asum = 0;
	int bsum = 0;

	if (asize != bsize)
		return asize < bsize;

	for (int i = 0; i < asize; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
			asum += a[i] - '0';
		if (b[i] >= '0' && b[i] <= '9')
			bsum += b[i] - '0';
	}
	if (asum != bsum)
		return asum < bsum;

	return a < b;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	string s[51];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	sort(s, s + n, cmp);

	for (int i = 0; i < n; i++)
	{
		cout << s[i] << "\n";
	}

	return 0;
}