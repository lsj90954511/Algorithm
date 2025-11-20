#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	long long x = (1LL << n) + 1;
	cout << x * x;

	return 0;
}