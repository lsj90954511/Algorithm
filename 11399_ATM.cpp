#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, hap = 0, result = 0;
	cin >> n;
	vector <int> p(n);
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	sort(p.begin(), p.end());
	for (int i = 0; i < n; i++)
	{
		hap += p[i];
		result += hap;
	}

	cout << result << "\n";

	return 0;
}