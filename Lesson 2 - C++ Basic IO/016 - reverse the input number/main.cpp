#include <iostream>
using namespace std;
main()
{
    int n, rem, rev = 0;
    cout << "Enter any positive integer: " << endl;
    cin >> n;
    while (n > 0)
    {
        rem = n / 10;               // divide a number by 10 to fetch the first digit
        rev = rev * 10 + rem;       // multiply the value of reverse by 10 and add the fetched digit (i.e. rem)
        n = n / 10;                 // divide number by 10 to terminate as the digit finishes
    }
    cout << "The reverse is" << rev;
}