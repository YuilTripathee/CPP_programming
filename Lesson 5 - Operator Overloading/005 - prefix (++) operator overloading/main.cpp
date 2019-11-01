#include <iostream>
using namespace std;
class Increment
{
    int a, b;

  public:
    void GetData()
    {
        cout << "\nEnter two integers: " << endl;
        cin >> a >> b;
    }
    void operator++()
    {
        ++a;
        ++b;
    }
    void Display()
    {
        cout << "A = " << a;
        cout << "B = " << b;
    }
};
main()
{
    Increment ob;
    ob.GetData();
    cout << "Before Increment: " << endl;
    ob.Display();
    ++ob; // operator overloading
    cout << "After Increment: " << endl;
    ob.Display();
}