#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int k, n;
	cin >> k;
	for (int t = 1; t <= k; t++) {
		int gap = -1;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < n - 1; i++) {
			int x = abs(v[i + 1] - v[i]);
			if (gap < x)
				gap = x;
		}
		cout << "Class " << t << "\n";
		cout << "Max " << v[n - 1] << ", Min " << v[0] << ", Largest gap " << gap << "\n";
	}

	return 0;
}