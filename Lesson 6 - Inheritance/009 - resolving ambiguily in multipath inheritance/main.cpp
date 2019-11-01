/*
    Multipath Inheritance:
                Class A
        __________| |_________
        |                    |
    Class B                Class C
        |_________   ________|
                  | |
                Class D

*/
// virtual base class is implemented
#include <iostream>
using namespace std;
class A
{
    public:
    int a;
};
class B : virtual public A
{
    public:
    int b;
};
class C : virtual public A
{
    public:
    int c;
};
class D : public B, public C
{
    private:
    int d;

    public:
    void Sum()
    {
        d = a + b + c;
    }
    void Display()
    {
        cout << "Sum: " << d;
    }
};
main()
{
    D ob;
    ob.a = 10;
    ob.b = 20;
    ob.c = 30;
    ob.Sum();
    ob.Display();
}
