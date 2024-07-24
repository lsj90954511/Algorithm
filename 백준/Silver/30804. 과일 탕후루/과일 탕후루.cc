#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, result = 1;
	
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int left = 0;
	unordered_map<int, int> count;

	for (int right = 0; right < n; right++)
	{
		count[v[right]]++;

		while (count.size() > 2)
		{
			count[v[left]]--;
			if (count[v[left]] == 0)
			{
				count.erase(v[left]);
			}
			left++;
		}
		result = max(result, right - left + 1);
	}

	cout << result;

	return 0;
}

