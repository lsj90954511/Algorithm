#include <iostream>
using namespace std;

void hanoi(int n, int start, int mid, int to) {
	if (n == 1) {
		cout << start << " " << to << "\n";
		return;
	}
	hanoi(n - 1, start, to, mid);
	cout << start << " " << to << "\n";
	hanoi(n - 1, mid, start, to);
}

int hanoiCnt(int n) {
	if (n == 1)
		return 1;
	return 2 * hanoiCnt(n - 1) + 1;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cout << hanoiCnt(n) << "\n";
	hanoi(n, 1, 2, 3);

	return 0;
}