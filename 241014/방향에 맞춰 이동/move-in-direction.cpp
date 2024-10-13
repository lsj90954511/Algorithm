#include <iostream>
using namespace std;

int main() {
    int n;
    int x = 0, y = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char c;
        int d;

        cin >> c >> d;

        if (c == 'W')
            x -= d;
        else if (c == 'S')
            y -= d;
        else if (c == 'N')
            y += d;
        else
            x += d;
    }

    cout << x << " " << y;
    return 0;
}