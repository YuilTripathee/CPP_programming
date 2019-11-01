#include <iostream>
using namespace std;
class Test
{
    int n;
public:
    inline int display(n)   // inline function declaration
    {
        return n * n;
    }
};
main()
{
    Test ob;
    cout << "Result = " << ob.display(5);
}