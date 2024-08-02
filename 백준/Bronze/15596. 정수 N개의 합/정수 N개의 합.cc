#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a)
{
	long long hap = 0;
	for (int i = 0; i < a.size(); i++)
	{
		hap += a[i];
	}
	return hap;
}


