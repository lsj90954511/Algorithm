#include <iostream>
#include <cmath>
using namespace std;

int main()
{	
	int m, n, hap = 0, min = 10001;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		for (int j = 1; j <= sqrt(i); j++) {
			if (j * j == i) {
				hap += i;
				if (min > i) min = i;
			}
		}
	}

	if (hap > 0) cout << hap << "\n" << min;
	else cout << "-1";

	return 0;
}