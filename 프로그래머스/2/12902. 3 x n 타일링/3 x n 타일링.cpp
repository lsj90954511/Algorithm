#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    long long dp[5001];
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 3;
    
    if (n % 2 == 1) {
        answer = 0;
    }
    else {
        for (int i = 4; i <= n; i++) {
            dp[i] = 3 * dp[i - 2];
            for (int j = i - 4; j >= 0; j -= 2) {
                dp[i] += dp[j] * 2;
            }
            dp[i] %= 1000000007;
        }
    }
    answer = dp[n];
    
    return answer;
}