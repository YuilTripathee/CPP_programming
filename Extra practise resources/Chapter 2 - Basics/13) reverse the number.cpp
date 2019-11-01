//program no 13
#include<iostream>
using namespace std;
main()
{
    int n, rem, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    while(n>0)
    {   
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << "The reverse is :" << rev;
}