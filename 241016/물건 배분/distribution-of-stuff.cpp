#include <iostream>
using namespace std;

int main() {
    int n, m, hap = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        hap += x;
    }
    if (hap % m != 0)
        cout << hap / m + 1;
    else
        cout << hap / m;
    return 0;
}