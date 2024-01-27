#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, i, j;
	vector<unsigned long long> hap;

	hap.push_back(0);
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		hap.push_back(hap[i - 1] + x);
	}

	while (m--)
	{
		cin >> i >> j;
		cout << hap[j] - hap[i - 1] << "\n";
	}

	return 0;
}