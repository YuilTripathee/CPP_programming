// WAP to use static data member in a class having a function count() and to cout the number of times
// the function is called by the objects of that class
#include <iostream>
class Test
{
    static int counter; // static keyword used for static data member declaration
public:
    void Count()
    {
        counter++; // increment to counter variable is common to all the objects
        cout << "\nFunction called for time: " << counter;
    }
};
int Test :: counter; // don't forget to declare the static data member using scope resolution operator
main()
{
    Test ob1, ob2, ob3;
    ob1.count();
    ob2.count();
    ob3.count();
}