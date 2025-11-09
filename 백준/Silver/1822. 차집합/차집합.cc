#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int n, m;
	vector<int> rst;
	cin >> n >> m;
	set<int> a;
	set<int> b;
	while (n--) {
		int x;
		cin >> x;
		a.insert(x);
	}
	while (m--) {
		int x;
		cin >> x;
		b.insert(x);
	}
	for (auto it = a.begin(); it != a.end(); it++) {
		if (b.find(*it) == b.end()) {
			rst.push_back(*it);
		}
	}

	if (rst.size() == 0) cout << "0";
	else {
		sort(rst.begin(), rst.end());
		cout << rst.size() << "\n";
		for (int i = 0; i < rst.size(); i++) {
			cout << rst[i] << " ";
		}
	}

	return 0;
}