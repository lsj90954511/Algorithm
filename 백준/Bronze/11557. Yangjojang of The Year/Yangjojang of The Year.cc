#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second > b.second;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;
	cin >> t;
	while (t--) {
		map<string, int> m;
		cin >> n;
		while (n--) {
			string s;
			int l;
			cin >> s >> l;
			m.insert({ s, l });
		}
		vector<pair<string, int>> v(m.begin(), m.end());
		sort(v.begin(), v.end(), cmp);
		cout << v[0].first << "\n";
	}

	return 0;
}