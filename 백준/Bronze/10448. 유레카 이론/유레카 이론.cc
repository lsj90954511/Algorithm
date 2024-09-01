#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	int t[1001];
	int idx = 1;
	while (idx * (idx + 1) / 2 <= 1000) {
		t[idx] = idx * (idx + 1) / 2;
		idx++;
	}
	cin >> n;
	while(n--) {
		int k;
		bool find = false;
		cin >> k;
		for (int i = 1; i < idx; i++) {
			for (int j = 1; j < idx; j++) {
				for (int x = 1; x < idx; x++) {
					if (t[i] + t[j] + t[x] == k) {
						find = true;
						break;
					}
				}
				if (find)
					break;
			}
			if (find)
				break;
		}
		if (find)
			cout << "1\n";
		else
			cout << "0\n";
	}
	
	return 0;
}