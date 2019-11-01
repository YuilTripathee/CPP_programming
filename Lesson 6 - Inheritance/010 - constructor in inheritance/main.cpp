#include <iostream>
using namespace std;
class Polygon
{
    int x;

    public:
    Polygon(int j)
    {
        x = j;
        cout << "Basic parameterized constructor: ";
        cout << "Value of x = " << x << endl;
    }
    ~Polygon()
    {
        cout << "Destructor from base class.";
    }
};
class Rectangle
{
    int y;

    public:
    Rectangle(int k) : Polygon(k)
    {
        y = j;
        cout << "Derived parametrized constructor.";
        cout << "Value of y = " << y << endl;
    }
    ~Rectangle()
    {
        cout << "Destructor from derived class." << endl
    }
};
main()
{
    Rectangle ob(10);
}