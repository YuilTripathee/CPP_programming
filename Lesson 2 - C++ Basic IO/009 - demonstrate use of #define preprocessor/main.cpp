#include <iostream>
using namespace std;
#define PI 3.14
main()
{
    float r, a;
    cout << "Enter radius: " << endl;
    cin >> r;
    a = PI * r * r;
    cout << "The area of the circle is " << a;
}