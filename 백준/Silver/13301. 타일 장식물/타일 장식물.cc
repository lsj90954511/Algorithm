#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	long long width, height;
	cin >> n;
	vector<long long> v(n + 1);
	v[1] = v[2] = 1;

	if (n == 1)
	{
		cout << "4";
		return 0;
	}
	else if (n == 2)
	{
		cout << "6";
		return 0;
	}
	for (int i = 3; i <= n; i++)
	{
		v[i] = v[i - 1] + v[i - 2];
	}
	width = v[n] + v[n - 1];
	height = v[n - 1] + v[n - 2];

	cout << 2 * width + 2 * height;

	return 0;
}
