// WAP using OOP to take length and breadth of a rectangle and display its area.
// Create a class rectangle that has data member (l and b) and two function members GetData()
// and ShowData(). The GetData() takes input and ShowData() gives area.

#include <iostream>
using namespace std;
class Rectangle
{
    int l, b, A;
public:
    void GetData()
    {
        cout << "Enter length and breadth: " << endl;
        cin >> l >> b;
    }
    void ShowData()
    {
        A = l * b;
        return A;
    }
};
main()
{
    Rectangle b1;
    b1.GetData();
    cout << "Volume is: " << b1.ShowData() << endl;
}