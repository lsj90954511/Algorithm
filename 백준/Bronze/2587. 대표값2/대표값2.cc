#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[5];
	int avg = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		avg += arr[i];
	}
	sort(arr, arr + 5);
	cout << avg / 5 << " " << arr[2];

	return 0;
}