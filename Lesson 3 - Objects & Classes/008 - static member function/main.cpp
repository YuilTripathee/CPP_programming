// static member function declaration
#include <iostream>
using namespace std;
class Test
{
    static int num;         // static data member declaration
public:
    static int Display()    // static member function definition
    {
        return num;
    }
    static int Increase()  // static member function definition
    {
        num++;
    }
};
int Test::num;            // don't forget to declare the static data member using scope resolution operator
main()
{
    cout << "Initial value of num = " << Test::Display() << endl; // initial value
    Test ob1, ob2, ob3; // object creation
    Test::Increase();   // invoking static member function (seems to be apart from object declared above)
    Test::Increase();
    Test::Increase();
    cout << "Final value of num = " << Test::Display() << endl; // finally incremented the value
}