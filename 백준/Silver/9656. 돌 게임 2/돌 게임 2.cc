#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	if (n % 2 != 0)
		cout << "CY";
	else
		cout << "SK";

	return 0;
}