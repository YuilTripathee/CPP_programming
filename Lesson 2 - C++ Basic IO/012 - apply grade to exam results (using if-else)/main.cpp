#include <iostream>
using namespace std;
main() {
    int m;
    cout << "Enter the ranks: " << endl;
    cin >> m;
    if (m >= 80)
    {
        cout << "Distinction";
    }
    else if (m >= 60)
    {
        cout << "First division";
    }
    else if (m >= 50)
    {
        cout << "Second division";
    }
    else if (m >= 40)
    {
        cout << "Third division";
    }
    else
    {
        cout << "Fail";
    }
}