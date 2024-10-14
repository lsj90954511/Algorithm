#include <iostream>
using namespace std;

int main() {
    int x, y;
    char a;
    cin >> x >> a >> y;
    if (a == '+') {
        cout << x << " + " << y << " = " << x + y;
    }
    else if (a == '-') {
        cout << x << " - " << y << " = " << x - y;
    }
    else if (a == '*') {
        cout << x << " * " << y << " = " << x * y;
    }
    else
    {
        cout << x << " / " << y << " = " << x / y;
    }
    return 0;
}