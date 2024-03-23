#include <iostream>
using namespace std;

int p[2000001];
int s[100001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> s[i];

	cin >> x;
	for (int i = 0; i < n; i++) {
		if (x - s[i] >= 0 && p[x - s[i]] == 1) count++;
		else p[s[i]] = 1;
	}
	cout << count;
}