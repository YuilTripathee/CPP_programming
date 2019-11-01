// function overloading
#include <iostream>
using namespace std;
class Addition
{
  public:
    void Sum(int a, int b)
    {
        cout << a + b << endl;
    }
    void Sum(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
    void Sum(float a, float b, float c)
    {
        cout << a + b + c << endl;
    }
};
main()
{
    Addition ob;
    ob.Sum(10, 20);
    ob.Sum(10, 20, 30);
    ob.Sum(10.5, 20.5, 30.5);
}