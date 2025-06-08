#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int min = 1000001, max = -1000001;
	cin >> n;
	while (n--) {
		int x;
		cin >> x;
		if (min > x)
			min = x;
		if (max < x)
			max = x;
	}
	cout << min << " " << max;

	return 0;
}
