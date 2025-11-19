#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    
	int n;
	cin >> n;
	deque<int> dq;
	while (n--) {
		int c;
		cin >> c;
		if (c == 1 || c == 2) {
			int x;
			cin >> x;
			if (c == 1) dq.push_front(x);
			else dq.push_back(x);
		}
		else if (c == 3) {
			if (!dq.empty()) {
				int temp = dq.front();
				dq.pop_front();
				cout << temp << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
		else if (c == 4) {
			if (!dq.empty()) {
				int temp = dq.back();
				dq.pop_back();
				cout << temp << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
		else if (c == 5) {
			cout << dq.size() << "\n";
		}
		else if (c == 6) {
			if (dq.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (c == 7) {
			if (!dq.empty()) {
				int temp = dq.front();
				cout << temp << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
		else {
			if (!dq.empty()) {
				int temp = dq.back();
				cout << temp << "\n";
			}
			else {
				cout << "-1\n";
			}
		}
	}

	return 0;
}