#include <iostream>
using namespace std;
#define PI 3.14
main() {
    float r, a;
    cout << "Enter the radius: " << endl;
    cin >> r;
    a = PI * r * r;
    cout << "The area of circle is: " << a;
}