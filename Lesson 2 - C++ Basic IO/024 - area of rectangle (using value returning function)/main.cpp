#include <iostream>
using namespace std;
int area()
{
    int l, b, a;
    cout << "Enter length and breadth" << endl;
    cin >> l >> b;
    a = l * b;
    return a;
}
main()
{
    int a;
    a = area();
    cout << "The area is " << a;
}