// function overriding
#include <iostream>
using namespace std;
class A
{
  public:
    void Show()
    {
        cout << "Base class\n";
    }
};
class B : public A
{
  public:
    void Show()
    {
        cout << "Derived Class";
    }
};
main()
{
    B ob;
    ob.A ::show();
    ob.B ::show();
}