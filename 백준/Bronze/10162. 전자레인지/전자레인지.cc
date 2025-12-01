#include <iostream>
using namespace std;

int main()
{	
	int n;
	cin >> n;
	int a, b, c;
	a = n / 300;
	n %= 300;
	b = n / 60;
	n %= 60;
	c = n / 10;
	n %= 10;

	if (n != 0) cout << "-1";
	else cout << a << " " << b << " " << c;

	return 0;
}