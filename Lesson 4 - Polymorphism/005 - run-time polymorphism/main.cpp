#include <iostream>
using namespace std;
class Base
{
  public:
    virtual void Show()
    {
        cout << "In base class.";
    }
    void display()
    {
        cout << "Hello\n";
    }
};
class Derived : public Base
{
  public:
    void Show()
    {
        cout << "In derived class.";
    }
};
main()
{
    Base *ptr;
    ptr->display(); // compile time binding

    Derived ob;
    ptr = &ob;
    ptr->Show(); // run-time polymorphism
}