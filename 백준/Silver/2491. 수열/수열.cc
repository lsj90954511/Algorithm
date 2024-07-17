#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int down = 1, up = 1, result_down = 1, result_up = 1;

	
	for (int i = 1; i < n; i++)
	{
		if (v[i] < v[i - 1])
		{
			down++;
			up = 1;
		}
		else if (v[i] > v[i - 1])
		{
			up++;
			down = 1;
		}
		else
		{
			down++;
			up++;
		}
		if (down > result_down)
			result_down = down;
		if (up > result_up)
			result_up = up;
	}

	int result = result_down > result_up ? result_down : result_up;
	cout << result;

	return 0;
}