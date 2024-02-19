#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << "0";
		return 0;
	}
	vector<int> v(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int ex = floor(n * 0.15 + 0.5);
	double hap = 0;
	for (int i = ex + 1; i <= n - ex; i++)
	{
		hap += v[i];
	}

	int result = floor(hap / (n - 2 * ex) + 0.5);
	cout << result;

	return 0;
}
