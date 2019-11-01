#include <iostream>
using namespace std;
class Rectangle
{
public:
    Rectangle()     // constructor
    {
        cout << "\n Constructor Created";
    }
    ~Rectangle()    // deconstructor
    {
        cout << "\n Object destroyed";
    }
};
main()
{
    Rectangle ob;
}