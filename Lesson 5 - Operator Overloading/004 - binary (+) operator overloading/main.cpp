// binary (+) operator overloading for string concantenation
#include <iostream>
#include <string.h>
using namespace std;
class StringCat
{
  public:
    char str[20];
    void GetString()
    {
        cout << "\nEnter String: ";
        cin >> str;
    }
    void ShowString()
    {
        cout << str;
    }
    StringCat operator+(StringCat x)
    {
        StringCat temp;
        strcat(str, x.str);
        strcpy(temp.str, str);
        return temp;
    }
};
main()
{
    StringCat st1, st2, st3;
    st1.GetString();
    st2.GetString();
    cout << "\nFirst String is: ";
    st1.ShowString();
    cout << "\nSecond String is: ";
    st2.ShowString();
    cout << "----------------------------";
    st3 = st1 + st2; // operator overloading
    st3.ShowString();
}