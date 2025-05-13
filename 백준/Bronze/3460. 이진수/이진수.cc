#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;
	cin >> t;
	while (t--) {
		vector<int> v;
		int cnt = 0;

		cin >> n;
		while (n / 2 > 0) {
			v.push_back(n % 2);
			n /= 2;
		}
		v.push_back(n % 2);

		for (int i = 0; i < v.size(); i++) {
			if (v[i] == 1) {
				cout << i << " ";
			}
		}
	}

	return 0;
}
