#include <iostream>
class Rectangle
{
    float l, b, A;
public:
    Rectangle() // unparameterized constructor
    {
        l = b = 0;
    }
    Rectangle(float len, float br)
    {
        l = len;
        b = br;
    }
    float ShowArea()
    {
        A = l * b;
        return A;
    }
};
main()
{
    Rectangle ob1, ob2(10,10);
    cout << "\n Area of first rectangle is: " << ob1.ShowArea();
    cout << "\n Area of second rectangle is: " << ob2.ShowArea();
}