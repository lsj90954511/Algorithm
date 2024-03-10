#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    int h, m;
    int temp = b + c;
    if (temp < 60)
    {
        h = a;
        m = b + c;
    }
    else
    {
        h = a + temp / 60;
        h = h % 24;
        m = temp % 60;
    }
    
    cout << h << " " << m;
    
    return 0;
}