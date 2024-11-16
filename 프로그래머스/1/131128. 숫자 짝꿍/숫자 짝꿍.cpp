#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int x_cnt[10] = {0}, y_cnt[10] = {0};
    
    for (int i = 0; i < X.length(); i++) {
        x_cnt[X[i] - '0']++;
    }
    for (int i = 0; i < Y.length(); i++) {
        y_cnt[Y[i] - '0']++;
    }
    
    for (int i = 9; i >= 0; i--) {
        int cnt = min(x_cnt[i], y_cnt[i]);
        for (int j = 0; j < cnt; j++)
            answer += i + '0';
    }
    
    if (answer == "")
        answer = "-1";
    else if (answer[0] == '0')
        answer = "0";
    
    return answer;
}