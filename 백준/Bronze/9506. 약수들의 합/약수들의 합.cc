#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	while (true)
	{
		int n;
		cin >> n;
		if (n == -1)
			break;

		vector<int> v;
		int hap = 0;

		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				v.push_back(i);
				hap += i;
			}
		}

		if (hap == n)
		{
			cout << n << " = ";
			for (int i = 0; i < v.size(); i++)
			{
				if (i != v.size() - 1)
					cout << v[i] << " + ";
				else
					cout << v[i] << "\n";
			}
		}
		else
			cout << n << " is NOT perfect.\n";
	}

	return 0;
}