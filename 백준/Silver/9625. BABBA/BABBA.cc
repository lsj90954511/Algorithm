#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int k;
	vector<int> a, b;
	cin >> k;
	
	a.push_back(1);
	a.push_back(0);
	b.push_back(0);
	b.push_back(1);

	for (int i = 2; i <= k; i++)
	{
		a.push_back(a[i - 2] + a[i - 1]);
		b.push_back(b[i - 2] + b[i - 1]);
	}

	cout << a[k] << " " << b[k];

	return 0;
}