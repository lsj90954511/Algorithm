#include <iostream>
using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	if (n == 1)
		cout << "1\n";
	else if (n == 2)
		cout << min(4, (m + 1) / 2) << '\n';
	else if (m < 7)
		cout << min(4, m) << '\n';
	else
		cout << m - 7 + 5 << '\n';
	

	return 0;
}