// parameterized constructor program demo
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
    void DisplayVolume()
    {
        V = l * b * h;
        cout << "Volume= " << V << endl;
    }
};
main()
{
    Box ob(10, 5.5, 3);
    ob.DisplayVolume();
}