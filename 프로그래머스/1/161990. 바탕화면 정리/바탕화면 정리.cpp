#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int lux = 52, luy = 52, rdx = -1, rdy = -1;
    bool first = false, second = false;
    
    for (int i = 0; i < wallpaper.size(); i++) {
        for (int j = 0; j < wallpaper[i].length(); j++) {
            if (wallpaper[i][j] == '#') {
                if (lux > i)
                    lux = i;
                if (luy > j)
                    luy = j;
                if (rdx < i + 1)
                    rdx = i + 1;
                if (rdy < j + 1)
                    rdy = j + 1;
            }
        }
    }
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx);
    answer.push_back(rdy);
    
    return answer;
}