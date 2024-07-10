#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < i; k++)
			cout << " ";
		for (int j = 0; j < n - i; j++)
			cout << "*";
		cout << "\n";
	}

	return 0;
}