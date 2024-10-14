#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, result;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        int x = s[i] - '0';
        string temp;

        for (int j = 0; j < 2; j++) {
            temp += x % 2 + '0';
            x /= 2;
        }
        temp += x + '0';
        reverse(temp.begin(), temp.end());
        result += temp;
    }

    if (result[0] == '0' && s != "0")
        cout << result.substr(1);
    else
        cout << result;

    return 0;
}