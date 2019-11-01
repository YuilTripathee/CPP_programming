#include <iostream>
using namespace std;
void area()
{
    int l, b, a;
    cout << "Enter length and breadth" << endl;
    cin >> l >> b;
    a = l * b;
    cout << "Area is: " << a;
}
main()
{
    area(); // this is function call
}