#include <iostream>
using namespace std;
main() {
    int a = 1, b = 1, c, i;
    cout << a << endl;
    cout << b << endl;
    for (i = 3; i < 10; i++)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
}