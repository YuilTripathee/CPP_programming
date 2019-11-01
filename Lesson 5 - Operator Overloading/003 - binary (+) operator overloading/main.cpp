// binary (+) operator overloading to add objects
#include <iostream>
using namespace std;
class Distance
{
    int m, cm;

  public:
    Distance() // default contructor
    {
        m = 0;
        cm = 0;
    }

    Distance(int x, int y) // parameterized contructor
    {
        m = x;
        cm = y;
    }
    Distance operator++(Distance Dis) // binary operator overloading
    {
        Distance d;
        d.m = m + Dis.m;
        d.cm = m + Dis.cm;
        return d;
    }
    void display()
    {
        cout << "Meters: " << m << endl;
        cout << "Centimeters: " << cm << endl;
    }
};
main()
{
    Distance d1(2, 10), d2(5, 30), d3; // creating objects
    cout << "* First distance *" << endl;
    d1.display();
    cout << "* Second distance *" << endl;
    d2.display();
    d3 = d1 + d2; // binary operator overloading
    cout << " * Total *" << endl;
    d3.display();
}