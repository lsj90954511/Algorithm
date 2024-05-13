#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	string arr[1001];

	for (int i = 0; i < s.length(); i++)
	{
		arr[i] = s.substr(i);
	}

	sort(arr, arr + s.length());

	for (int i = 0; i < s.length(); i++)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}