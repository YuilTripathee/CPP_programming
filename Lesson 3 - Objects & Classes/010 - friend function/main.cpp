#include <iostream>
class Test
{
private:
    int n;
public:
    int GetData()
    {
        cout << "Enter an integer: ";
        cin >> n;
    }
    friend void square(Test); // friend function declaration
};
void square(Test s) // parameterized object
{
    int a = s.n * s.n; // accessing private data from non-member function
    cout << "Square :" << a << endl;
}
main()
{
    Test ob;
    ob.GetData();
    square(ob);
}