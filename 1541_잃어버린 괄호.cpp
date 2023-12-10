#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
	string a;
	int index = 0, result = 0, minus = 0;
	queue<int> num;
	cin >> a;
	
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '+' || a[i] == '-')
		{
			int x = stoi(a.substr(index, i - index)); //문자열을 숫자로
			index = i + 1;
			num.push(x);
		}
		if (i == a.length() - 1)
		{
			int x = stoi(a.substr(index, a.length() - index)); //문자열을 숫자로
			num.push(x);
		}
	}

	result += num.front();
	num.pop();

	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == '+')
		{
			result += num.front();
			num.pop();
		}
		else if (a[i] == '-')
		{
			while (!num.empty())
			{
				minus += num.front();
				num.pop();
			}
			break;
		}
	}

	result -= minus;

	cout << result << endl;

	return 0;
}