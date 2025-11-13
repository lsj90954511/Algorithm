#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;

		vector<string> v;
		stringstream ss(s);
		string token;
		while (getline(ss, token, ',')) {
			v.push_back(token);
		}
		cout << stoi(v[0]) + stoi(v[1]) << "\n";
	}

	return 0;
}