#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int arr[100][100], dp[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    dp[0][0] = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0)
                continue;
            if (i == 0) {
                dp[i][j] = dp[i][j - 1] + arr[i][j];
            }
            else if (j == 0) {
                dp[i][j] = dp[i - 1][j] + arr[i][j];
            }
            else {
                dp[i][j] = max(dp[i - 1][j] + arr[i][j], dp[i][j - 1] + arr[i][j]);
            }
        }
    }
    cout << dp[n - 1][n - 1];
    return 0;
}