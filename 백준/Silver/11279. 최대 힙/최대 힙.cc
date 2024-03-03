#include <iostream>
using namespace std;

int arr[100001];
int cnt = 0;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void push(int x)
{
	arr[++cnt] = x;

	int child = cnt;
	int parent = child / 2;

	while (child > 1 && arr[parent] < arr[child])
	{
		swap(&arr[parent], &arr[child]);
		child = parent;
		parent = child / 2;
	}
}
int pop()
{
	int max = arr[1];

	swap(&arr[1], &arr[cnt]);
	cnt--;

	int parent = 1;
	int child = parent * 2;

	if (child + 1 <= cnt)
		child = arr[child] > arr[child + 1] ? child : child + 1;

	while (child <= cnt && arr[child] > arr[parent])
	{
		swap(&arr[child], &arr[parent]);
		parent = child;
		child = parent * 2;

		if (child + 1 <= cnt)
			child = arr[child] > arr[child + 1] ? child : child + 1;
	}
	return max;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x == 0)
		{
			if (cnt == 0)
				cout << "0\n";
			else
				cout << pop() << "\n";
		}
		else
			push(x);
	}

	return 0;
}
