#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	int t;
	cin >> t;
	while (t--) {
		int a, b, d = 1;
		cin >> a >> b;
		for (int i = 0; i < b; i++) {
			d = d * a % 10;
		}

		if (d == 0) cout << "10\n";
		else cout << d << "\n";
	}

	return 0;
}