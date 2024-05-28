#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, kim, lim, round = 0;
	cin >> n >> kim >> lim;
	while (kim != lim)
	{
		kim -= kim / 2;
		lim -= lim / 2;
		round++;
	}

	cout << round;

	return 0;
}