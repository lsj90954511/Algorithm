#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int t;
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		int dist = y - x;
		int max = (int)sqrt(dist);

		if (max == sqrt(dist)) {
			cout << max * 2 - 1 << "\n";
		}
		else if (dist <= max * max + max) {
			cout << max * 2 << "\n";
		}
		else {
			cout << max * 2 + 1 << "\n";
		}
	}

	return 0;
}