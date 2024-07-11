#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt = 1;

	while (true)
	{
		int l, p, v;
		cin >> l >> p >> v;

		if (l == 0 && p == 0 && v == 0)
			break;

		cout << "Case " << cnt << ": ";
		cnt++;
		if (l >= v % p)
			cout << (v / p) * l + v % p << "\n";
		else
			cout << (v / p) * l + l << "\n";
	}

	return 0;
}