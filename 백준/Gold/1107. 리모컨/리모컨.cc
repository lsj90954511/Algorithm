#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, cnt, cnt2;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	cnt = abs(n - 100);

	//순서대로 검사해서 고장난 버튼이 필요 없는 수에서 목표 채널까지 버튼을 몇 번 누르는 지 계산
	for (int i = 0; i <= 1000000; i++)
	{
		string s = to_string(i);
		bool broken = false;
		for (int j = 0; j < s.length(); j++)
		{
			if (find(v.begin(), v.end(), s[j] - '0') != v.end())
				broken = true;
		}
		if (!broken)
		{
			cnt2 = abs(n - i) + s.length();
			cnt = min(cnt, cnt2);
		}
	}

	cout << cnt;

	return 0;
}