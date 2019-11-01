// virtual function
#include <iostream>
using namespace std;
class A
{
  public:
    virtual void show()
    {
        cout << "Base class A";
    }
};
class B : public A
{
  public:
    void show()
    {
        cout << "Derived class B";
    }
};
class C : public A
{
  public:
    void show()
    {
        cout << "Derived class C";
    }
};
main()
{
    A *b;  // base class pointer
    B ob1; // object of class B
    C ob2; // object of class C

    b = &ob1; // b pointing object ob1
    b->show();

    b = &ob2; // b pointing object ob2
    b->show();
}