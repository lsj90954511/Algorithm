#include <iostream>
using namespace std;

int num1 = 0, num2 = 0;
int f[41] = { 0, 1, 1 };

int fib(int n)
{
	if (n == 1 || n == 2)
	{
		num1++;
		return 1;
	}
	else
		return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n)
{
	for (int i = 3; i <= n; i++)
	{
		num2++;
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[n];
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	fib(n);
	fibonacci(n);

	cout << num1 << " " << num2;

	return 0;
}

