#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<char> v;
vector<char> password;
int l, c;
int vowel, conso;

void bfs(int start, int cnt) {
	if (cnt == l) {
		vowel = 0;
		conso = 0;
		for (int i = 0; i < password.size(); i++) {
			if (password[i] == 'a' || password[i] == 'e' || password[i] == 'i' || password[i] == 'o' || password[i] == 'u')
				vowel++;
			else
				conso++;
		}
		if (vowel >= 1 && conso >= 2) {
			for (int i = 0; i < password.size(); i++) {
				cout << password[i];
			}
			cout << "\n";
		}
		return;
	}

	for (int i = start; i < v.size(); i++) {
		password.push_back(v[i]);
		bfs(i + 1, cnt + 1);
		password.pop_back();
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	
	cin >> l >> c;
	for (int i = 0; i < c; i++) {
		char x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	bfs(0, 0);

	return 0;
}