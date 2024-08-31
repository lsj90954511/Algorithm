#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	while (n--) {
		string s, leftS, rightS;
		stack<char> left, right;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '<') {
				if (!left.empty()) {
					char temp = left.top();
					left.pop();
					right.push(temp);
				}
			}
			else if (s[i] == '>') {
				if (!right.empty()) {
					char temp = right.top();
					right.pop();
					left.push(temp);
				}
			}
			else if (s[i] == '-') {
				if (!left.empty()) {
					left.pop();
				}
			}
			else {
				left.push(s[i]);
			}
		}
		int leftSize = left.size();
		for (int i = 0; i < leftSize; i++) {
			char temp = left.top();
			left.pop();
			leftS += temp;
		}
		reverse(leftS.begin(), leftS.end());
		int rightSize = right.size();
		for (int i = 0; i < rightSize; i++) {
			char temp = right.top();
			right.pop();
			rightS += temp;
		}
		string result = leftS + rightS;
		cout << result << "\n";
	}
	
	return 0;
}