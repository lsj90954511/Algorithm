#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n, m, j, result = 0;
	vector<int> v;

	cin >> n >> m >> j;
	for (int i = 0; i < j; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	int left = 1, right = m;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] >= left && v[i] <= right) continue;
		else {
			if (abs(v[i] - left < abs(v[i] - right))) {
				result += abs(v[i] - left);
				if (v[i] > left) {
					right = right + (v[i] - left);
				}
				else {
					right = right - (left - v[i]);
				}
				left = v[i];
			}
			else {
				result += abs(v[i] - right);
				if (v[i] > right) {
					left = left + (v[i] - right);
				}
				else {
					left = left - (right - v[i]);
				}
				right = v[i];
			}
		}
	}

	cout << result << "\n";

	return 0;
}