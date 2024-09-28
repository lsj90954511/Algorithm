#include <iostream>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	c += d % 60;
	b += d / 60;

	if (c >= 60) {
		b += c / 60;
		c %= 60;
	}
	if (b >= 60) {
		a += b / 60;
		b %= 60;
	}
	if (a >= 24) {
		a %= 24;
	}

	cout << a << " " << b << " " << c;

	return 0;
}