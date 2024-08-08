#include <iostream>
#include <string>
#include <vector>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int result = -1;
	string a, b;
	cin >> a >> b;
	vector<vector<int>> v(a.size() + 1, vector<int>(b.size() + 1, 0));

	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < b.size(); j++)
		{
			if (a[i] == b[j])
				v[i + 1][j + 1] = v[i][j] + 1;
			else
				v[i + 1][j + 1] = max(v[i][j + 1], v[i + 1][j]);

			result = max(result, v[i + 1][j + 1]);
		}
	}

	cout << result;

	return 0;
}
