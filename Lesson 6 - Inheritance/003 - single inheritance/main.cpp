/*
        Area
          |
      Rectangle
*/
#include <iostream>
using namespace std;
class Area
{
    protected:
    int len, br;

    public:
    void GetData(int x, int y)
    {
        len = x;
        br = y;
    }
};
class Rectangle : public Area
{
    public:
    int Calculate()
    {
        return len * br;
    }
};
main()
{
    Rectangle ob;
    ob.GetData(5, 2);
    cout << "Area of rectangle is " << ob.Calculate();
}