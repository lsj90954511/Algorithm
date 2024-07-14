#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end(), greater<>());

	for (int i = 0; i < n; i++)
	{
		cout << v[i] << "\n";
	}

	return 0;
}