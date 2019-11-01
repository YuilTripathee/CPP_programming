#include <iostream>
using namespace std;
void area(int l, int b)
{
    int a;
    a = l * b;
    cout << "Area is " << a;
}
main()
{
    int l, b;
    cout << "Enter length and breadth";
    cin >> l >> b;
    area(l, b);
}