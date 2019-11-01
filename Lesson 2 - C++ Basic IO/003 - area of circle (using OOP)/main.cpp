#include <iostream>
using namespace std;
#define PI 3.14
class AreaOfCircle
{
    float r, a;
public:
    void GetRaduis() {
        cout << "Enter radius of circle: " ;
        cin >> r;
    }
    void ShowArea() {
        a = PI * r * r;
        cout << "The area of circle is: " << a;
    }
};
main()
{
    AreaOfCircle obj; // object creation
    obj.GetRaduis();  // object call function GetRadius()
    obj.ShowArea();   // object call function ShowArea()
}