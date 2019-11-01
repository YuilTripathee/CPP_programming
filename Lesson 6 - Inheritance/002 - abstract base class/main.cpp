#include <iostream>
using namespace std;
class Vehicle
{
    public:
    virtual void Display() = 0;
    void Show()
    {
        cout << "This is Show() method of base class.";
    }
};
class Bike : public Vehicle
{
    public:
    void Display()
    {
        cout << "This is Display() method of derived class.";
    }
};
main()
{
    Bike ob;
    ob.Display(); // invokes Display() method of derived class
    ob.Show(); // invokes Show() method of Base class
}