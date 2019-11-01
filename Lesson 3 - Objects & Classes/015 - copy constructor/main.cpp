#include <iostream>
using namespace std;
class Box
{
    float l, b, h, V;
public:
    Box(float len, float br, float ht)
    {
        l = len;
        b = br;
        h = ht;
    }
    Box(Box &ob2) // copy constructor
    {
        l = ob2.l;
        b = ob2.b;
        h = ob2.h;
    }
    void ShowVolume()
    {
        V = l * b * h;
        cout << "Volume = " << V << endl;
    }
};
main()
{
    Box ob1(10.5, 5, 3);
    Box ob2(ob1);
    cout << "----- For first object -----";
    ob1.ShowVolume();
    cout << "----- For second object -----";
    ob2.ShowVolume();
}