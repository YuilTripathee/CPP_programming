// sample program to show object initialization
#include <iostream>
using namespace std;
class Rectangle
{
    int l, b, A;
public:
    void Rectangle(int len, int br) // constructor created
    {
        l = len;
        b = br;
    }
    int ShowArea()
    {
        A = l * b;
        cout << "Area is: " << A;
    }
};
main()
{
    Rectangle ob(10,5); // object initialization
    ob.ShowArea();
}