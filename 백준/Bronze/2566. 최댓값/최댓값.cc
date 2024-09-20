#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, max = 0;
	int arr[9][9];
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (max <= arr[i][j]) {
				max = arr[i][j];
				a = i + 1;
				b = j + 1;
			}
		}
	}

	cout << max << "\n" << a << " " << b;

	return 0;
}