#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 0;
	int arr[1000];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int start = arr[0], current = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[i - 1]) {
			current = arr[i] - start;
			result = max(result, current);
		}
		else {
			start = arr[i];
		}
	}

	cout << result;

	return 0;
}