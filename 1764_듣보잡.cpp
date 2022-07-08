#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, cnt = 0;
	cin >> n >> m;
	vector <string> hear(n);
	vector <string> see(m);
	vector <string> result;
	for (int i = 0; i < n; i++)
	{
		cin >> hear[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> see[i];
	}
	sort(hear.begin(), hear.end());
	sort(see.begin(), see.end());
	
	for (int i = 0; i < n; i++)
	{
		if (binary_search(see.begin(), see.end(), hear[i]))
		{
			cnt++;
			result.push_back(hear[i]);
		}
	}

	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++)
	{
		printf("%s\n", result[i].c_str());
	}

	return 0;
}