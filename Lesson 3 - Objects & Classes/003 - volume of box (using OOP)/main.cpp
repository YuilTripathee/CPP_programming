// WAP to declare a class Box having three data members (length, breadth and height) and
// two public function members GetData() for reading the data members and CalculateVolume()
// to find the box. Create an object b1 to access the class member. The function CalculateVolume()
// should return the value to the main()

#include <iostream>
using namespace std;
class Box
{
    int l, b, h;
public:
    void GetData()
    {
        cout << "Enter length, breadth and height" << endl;
        cin >> l >> b >> h;
    }
    int CalculateVolume()
    {
        int V;
        V = l * b * h;
        return V;
    }
};
main()
{
    Box b1;
    b1.GetData();
    cout << "Volume is " << b1.CalculateVolume() << endl;
}