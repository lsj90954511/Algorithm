#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double x1, y1, x2, y2, r1, r2, d, t;
	cin >> t;
	while (t--)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2)
				cout << "-1\n";
			else
				cout << "0\n";
		}
		else
		{
			if (d > r1 + r2)
				cout << "0\n";
			else if (d == r1 + r2)
				cout << "1\n";
			else if (max(r1, r2) - min(r1, r2) < d && r1 + r2 > d)
				cout << "2\n";
			else if (max(r1, r2) - min(r1, r2) == d)
				cout << "1\n";
			else
				cout << "0\n";
		}
	}

	return 0;
}
