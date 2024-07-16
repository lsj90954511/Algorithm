#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int a, p;
vector<int> v;

int calc(int a)
{
	string s = to_string(a);

	int hap = 0;

	for (int i = 0; i < s.length(); i++)
	{
		hap += pow(s[i] - '0', p);
	}

	return hap;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> p;
	v.push_back(a);

	int ind = 0;
	while (true)
	{
		int temp = calc(v[ind]);
		auto it = find(v.begin(), v.end(), temp);
		if (it != v.end())
		{
			int eraseIndex = it - v.begin();
			v.erase(v.begin() + eraseIndex, v.end());
			break;
		}
		else
		{
			v.push_back(temp);
			ind++;
		}
	}
	cout << v.size();

	return 0;
}