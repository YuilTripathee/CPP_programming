#include <iostream>
using namespace std;
main()
{
    float r, a;
    const float PI = 3.14;
    cout << "Enter the radius: " << endl;
    cin >> r;
    a = PI * r * r;
    cout << "The area of circle is: " << a;
}