#include <iostream>
using namespace std;

int main() {
    int n, m, hap = 0, box = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        hap += x;
        if (hap > m) {
            box++;
            hap = x;
        }
    }

    cout << box;

    return 0;
}