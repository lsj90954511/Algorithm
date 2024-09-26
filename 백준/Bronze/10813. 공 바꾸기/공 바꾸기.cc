#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	int arr[101];

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}