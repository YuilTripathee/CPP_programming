#include <iostream>
using namespace std;
main()
{
    int n, f = 1;
    cout << "Enter a positive integer" << endl;
    cin >> n;
    while (n > 0)
    {
        f = f * n;
        n = n - 1;
    }
    cout << "The factorial of " << n << " is " << f << endl;
}