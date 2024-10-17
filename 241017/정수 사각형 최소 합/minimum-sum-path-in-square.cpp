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

    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (i == 0 && j == n - 1) {
                dp[i][j] = arr[i][j];
            }
            else if (i == 0) {
                dp[i][j] = arr[i][j] + dp[i][j + 1];
            }
            else if (j == n - 1) {
                dp[i][j] = arr[i][j] + dp[i - 1][j];
            }
            else {
                dp[i][j] = min(arr[i][j] + dp[i - 1][j], arr[i][j] + dp[i][j + 1]);
            }
        }
    }
    cout << dp[n - 1][0];

    return 0;
}