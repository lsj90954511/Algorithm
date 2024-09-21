#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, cnt = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
		}
		if (cnt == k) {
			cout << i;
			break;
		}
	}
	if (cnt < k)
		cout << "0";

	return 0;
}