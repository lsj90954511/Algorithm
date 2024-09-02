#include <iostream>
#include <algorithm>
using namespace std;

long long two_power_n(long long n) {
	int count = 0;

	while (n >= 2) {
		count += n / 2;
		n /= 2;
	}

	return count;
}

long long five_poser_n(long long n) {
	int count = 0;

	while (n >= 5) {
		count += n / 5;
		n /= 5;
	}

	return count;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, m;
	cin >> n >> m;

	long long two_cnt = two_power_n(n) - two_power_n(m) - two_power_n(n - m);
	long long five_cnt = five_poser_n(n) - five_poser_n(m) - five_poser_n(n - m);

	cout << min(two_cnt, five_cnt);
	
	return 0;
}