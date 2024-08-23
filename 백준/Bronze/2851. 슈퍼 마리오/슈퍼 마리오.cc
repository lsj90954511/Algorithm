#include <iostream>
using namespace std;
int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        int afterSum = sum + a[i];
        if (afterSum >= 100) {
            if (afterSum - 100 <= 100 - sum) {
                cout << afterSum;
            } else {
                cout << sum;
            }
            return 0;
        }
        sum = afterSum;
    }
    cout << sum;
}