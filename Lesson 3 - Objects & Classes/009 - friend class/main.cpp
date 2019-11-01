// friend fuction declaration
#include <iostream>
class ABC
{
    int a, b;
public:
    void GetData()
    {
        cout << "Enter two integers: ";
        cin >> a >> b;
    }
    friend class XYZ;   // declaration of friend function inside base class
};
class XYZ
{
public:
    void Display(ABC m) // parameterized object declaration
    {
        cout << "\nThe first number is: " << m.a;   // data member from base class declared from parameterized constructor
        cout << "\nThe second number is: " << m.b;
    }
};
main()
{
    ABC ob1;
    XYZ ob2;    // objects of friend's class should be declared separately
    ob1.GetData();
    ob2.Display(ob1);   // object again in parameter assigned
}