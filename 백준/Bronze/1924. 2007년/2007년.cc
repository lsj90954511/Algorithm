#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y;
	cin >> x >> y;

	int temp = 0;
	for (int i = 1; i < x; i++)
	{
		switch (i)
		{
		case 1:
			temp += 31;
			break;
		case 2:
			temp += 28;
			break;
		case 3:
			temp += 31;
			break;
		case 4:
			temp += 30;
			break;
		case 5:
			temp += 31;
			break;
		case 6:
			temp += 30;
			break;
		case 7:
			temp += 31;
			break;
		case 8:
			temp += 31;
			break;
		case 9:
			temp += 30;
			break;
		case 10:
			temp += 31;
			break;
		case 11:
			temp += 30;
			break;
		}
	}
	temp += y;
	int day = temp % 7;
	string result;
	switch (day)
	{
	case 1:
		result = "MON";
		break;
	case 2:
		result = "TUE";
		break;
	case 3:
		result = "WED";
		break;
	case 4:
		result = "THU";
		break;
	case 5:
		result = "FRI";
		break;
	case 6:
		result = "SAT";
		break;
	case 0:
		result = "SUN";
		break;
	}

	cout << result;

	return 0;
}