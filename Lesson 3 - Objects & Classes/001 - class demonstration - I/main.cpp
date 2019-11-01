// WAP to declare a class rectangle having two member variable (len and br)
// and two member functions i.e. GetData(int l, int b) which recieves the data from main and
// showdata() which display the area of rectangle.
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int len, br;
public:
    void GetData(int l, int b)
    {
        len = l;
        br = b;
    }
    void ShowData()
    {
        int a = len * br;
        cout << "\nThe area is " << a << endl;
    }
};
main() {
    Rectangle r1, r2;       // defining two objects
    r1.GetData(20,10);      // accessing member function
    r2.GetData(10,5);
    r1.ShowData();
    r2.ShowData();          // accessing member function
}
