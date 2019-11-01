#include <iostream>
using namespace std;
class A
{
    public:
    int a;
    void GetData()
    {
        cout << "Enter first number: ";
        cin >> a;
    }
};
class B
{
    public:
    int b;
    void GetData()
    {
        cout << "Enter second number: ";
        cin >> b;
    }
};
class C : public A, public B
{
    public:
    int s;
    void ShowData()
    {
        s = a + b;
        cout << "The sum is: " << s;
    }
};
main()
{
    C ob;
    ob.A :: GetData(); // resolving ambiguilty
    ob.B :: GetData(); // resolving ambiguilty
}