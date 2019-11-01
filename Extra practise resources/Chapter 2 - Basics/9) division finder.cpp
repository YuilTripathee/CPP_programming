//program no 9
#include<iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    if(n >= 80)
    {
        cout << "Distinction" << endl;
    }
    else if (n >= 60)
    {
        cout << "First Division" << endl;
    }
    else if (n >= 50)
    {
        cout << "Second division" << endl;
    }
    else if (n >= 40)
    {
        cout << "Third Division" << endl;
    }
    else
    {
        cout << "Fourth Division" << endl;
    }
}