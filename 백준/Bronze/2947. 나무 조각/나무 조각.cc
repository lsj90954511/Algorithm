#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[5];
void change() {
	if (arr[0] > arr[1]) {
		int temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	if (arr[1] > arr[2]) {
		int temp = arr[1];
		arr[1] = arr[2];
		arr[2] = temp;
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	if (arr[2] > arr[3]) {
		int temp = arr[2];
		arr[2] = arr[3];
		arr[3] = temp;
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	if (arr[3] > arr[4]) {
		int temp = arr[3];
		arr[3] = arr[4];
		arr[4] = temp;
		for (int i = 0; i < 5; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
	if (!(arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3] && arr[3] < arr[4]))
		change();
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	change();

	return 0;
}