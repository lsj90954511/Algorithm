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

    for (int i = 0; i < result.length(); i++) {
        if (result[i] == '0')
            continue;
        else {
            cout << result.substr(i);
            break;
        }
    }

    return 0;
}