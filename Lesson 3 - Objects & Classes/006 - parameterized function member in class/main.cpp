// WAP using OOP paradigm to find the area of rectangle. The class 'Rectangle' should have two objects 
// to pass length and breadth during compile time and class should have two function.
#include <iostream>
using namespace std;
class Rectangle
{
    int l, b, a;
public:
    void GetData(int x, int y)
    {
        l = x;
        b = y;
    }
    void ShowData()
    {
        a = l * b;
        cout << "The area is: " << a << endl;
    }
};
main()
{
    Rectangle ob1, ob2;
    ob1.GetData(20,10);
    ob1.ShowData();
    ob2.GetData(5,15);
    ob2.ShowData();
}