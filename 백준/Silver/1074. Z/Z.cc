#include <iostream>
#include <cmath>
using namespace std;

int n, r, c, result;

void z(int x, int y, int size)
{
	if (x == r && y == c)
	{
		cout << result;
		return;
	}

	if (r < x + size && r >= x && c < y + size && c >= y)
	{
		//1
		z(x, y, size / 2);
		//2
		z(x, y + size / 2, size / 2);
		//3
		z(x + size / 2, y, size / 2);
		//4
		z(x + size / 2, y + size / 2, size / 2);
	}
	else
	{
		result += size * size;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> r >> c;
	z(0, 0, pow(2, n));

	return 0;
}
