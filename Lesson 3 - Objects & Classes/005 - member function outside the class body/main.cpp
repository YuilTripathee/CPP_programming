// WAP using OOP to enter an integer and check if it is positive, negative or zero
#include <iostream>
class OOP
{
    int x;
public:
    void getdata()  // both function declaration and definition inside the class body
    {
        cout << "Enter the number: " << endl;
        cin >> x;
    }
    void showdata();    // only function declaration inside the class body
}
void OOP :: showdata()  // defining function declared inside class body (note that '::' scope resolution operator)
{
    if (x > 0)
    {
        cout << "Positive";
    }
    else if (x == 0)
    {
        cout << "Zero";
    }
    else
    {
        cout << "Negative";
    }
}
main()
{
    OOP ob1;
    ob1.getdata();  // hiring function defined inside class body
    ob1.showdata(); // hiring function defined outside class body
}