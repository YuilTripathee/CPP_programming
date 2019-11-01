#include <iostream>
using namespace std;
class Test
{
    int n;

  public:
    Test()
    {
        n = 5;
    }
    int GetNum()
    {
        return n;
    }
    Test operator++(int)
    {
        Test temp;
        n++;
        temp.n = n;
        return temp;
    }
};
main()
{
    Test ob;
    cout << "N = " << ob.GetNum() << endl;
    ob++;
    cout << "N = " << ob.GetNum() << endl;
}
