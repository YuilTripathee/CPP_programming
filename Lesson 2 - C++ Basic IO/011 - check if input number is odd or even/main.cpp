#include <iostream>
using namespace std;
main() {
    int n, rem;
    cout << "Enter any positive integer " << endl;
    cin >> n;
    rem = n % 2;
    if (rem == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
}