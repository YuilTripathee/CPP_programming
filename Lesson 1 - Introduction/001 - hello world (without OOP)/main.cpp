// pre-processor defined as usual C-like program, '<>' for library function and '""' for user defined function
#include <iostream>
// standard namespace from C++ preferred
using namespace std;
// class declaration
// syntax Class ClassName {};
class HelloWorld
{
// access specifier (others are protected and private)
public:
    // function with void return and no parameters
    // remember to use void method where program does not return anything
    void SayHello()
    {
        // cout (standard output object) invoked to display "Hello World" as output
        cout << "Hello World";
    }
};
// don't forget semi-colon after then end of the class
// main function goes here
// remember not to use return type if the main program does not return any value
main()
{
    // object creation syntax: ClassName ObjectName;
    HelloWorld HW;
    // functions available (in public) invoked using dot(.) operator
    HW.SayHello();
}
