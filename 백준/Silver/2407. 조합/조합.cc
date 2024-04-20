#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, m;
string arr[101][101];

string bigNumAdd(string a, string b)
{
	int sum = 0;
	string result;

	while (!a.empty() || !b.empty() || sum)
	{
		if (!a.empty())
		{
			sum += a.back() - '0';
			a.pop_back();
		}
		if (!b.empty())
		{
			sum += b.back() - '0';
			b.pop_back();
		}
		result.push_back((sum % 10) + '0');
		sum /= 10;
	}

	reverse(result.begin(), result.end());
	return result;
}

string combination(int n, int r)
{
	if (n == r || r == 0)
		return "1";

	string &ans = arr[n][r];

	if (ans != "")
		return ans;

	ans = bigNumAdd(combination(n - 1, r - 1), combination(n - 1, r));
	return ans;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	cout << combination(n, m);

	return 0;
}