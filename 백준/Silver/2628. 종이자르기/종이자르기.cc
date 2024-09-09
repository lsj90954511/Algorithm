#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k;
	cin >> n >> m >> k;
	vector<int> widths, heights;

	widths.push_back(0);
	heights.push_back(0);
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		if (a == 0) {
			heights.push_back(b);
		}
		else {
			widths.push_back(b);
		}
	}
	widths.push_back(n);
	heights.push_back(m);

	sort(widths.begin(), widths.end());
	sort(heights.begin(), heights.end());

	int width = 0, height = 0;
	for (int i = 0; i < widths.size() - 1; i++) {
		width = max(width, widths[i + 1] - widths[i]);
	}
	for (int i = 0; i < heights.size() - 1; i++) {
		height = max(height, heights[i + 1] - heights[i]);
	}

	cout << width * height;

	return 0;
}