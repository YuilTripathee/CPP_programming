// unary (-) operator overloading
#include <iostream>
using namespace std;
class Test
{
    int x;

  public:
    Test(int a)
    {
        x = a;
    }
    void operator-()
    {
        x = -x;
    }
    void display()
    {
        cout << "Value of x = " << x << endl;
    }
};
main()
{
    Test ob(5);
    cout << "Before overloading." << endl;
    ob.display();
    -ob;
    cout << "After overloading." << endl;
    ob.display();
}