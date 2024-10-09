#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	 
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<pair<int, int>> v;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			v.push_back({ a, b });
		}
		sort(v.begin(), v.end());
		int interviewRank = 100001, cnt = 0;
		for (int i = 0; i < n; i++) {
			if (interviewRank > v[i].second) {
				cnt++;
				interviewRank = v[i].second;
			}
		}
		cout << cnt << "\n";
	}

	return 0;
}