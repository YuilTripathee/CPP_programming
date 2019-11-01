#include <iostream>
using namespace std;
main() {
    int n[10], sum = 0, i;
    cout << "Enter any ten numbers: " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter " << i++ << " number: " << endl;
        cin >> n[i];
        sum = sum + n[i];
    }
    cout << "The numbers are " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << n[i];
    }
    cout << "The sum is: " << sum;
}