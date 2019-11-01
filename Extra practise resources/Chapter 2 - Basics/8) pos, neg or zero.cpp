//program no 8
#include<iostream>
using namespace std;
main()
{
    int n;
    cout << "Enter a number";
    cin >> n;
    if(n > 0)
    {
        cout << "Positive" << endl;
    }
    else if (n < 0)
    {
        cout << "Negative" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }
}