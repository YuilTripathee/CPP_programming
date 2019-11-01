// pure virtual function
#include <iostream>
using namespace std;
class A
{
  public:
    virtual void show() = 0; // pure virtual function
};
class B : public A
{
  public:
    void show()
    {
        cout << "Virtual";
    }
};
main()
{
    A *b;    // base pointer
    B ob;    // derived class pointer
    b = &ob; // object reference by pointer
    b->show();
}