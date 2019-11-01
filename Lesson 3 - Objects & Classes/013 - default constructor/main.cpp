// sample program to demostrate default contructor
#include <iostream>
class Box
{
public:
    Box()
    {
        cout << "Contructor created!!!";
    }
};
main()
{
    Box b1, b2, b3;
}