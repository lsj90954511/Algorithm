#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, score, p, rank = 1, same = 0;
	cin >> n >> score >> p;
	vector<int> v(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	if (n == 0)
	{
		cout << "1";
		return 0;
	}

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > score)
			rank++;
		else if (v[i] == score)
			same++;
		else
			break;
	}

	if (rank + same > p)
		cout << "-1";
	else
		cout << rank;

	return 0;
}
