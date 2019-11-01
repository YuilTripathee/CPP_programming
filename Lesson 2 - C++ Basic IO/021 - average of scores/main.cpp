#include <iostream>
using namespace std;
main() {
    int n[10], sum = 0; i, avg;
    cout << "Enter any ten numbers " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << n[i];
        sum = sum + n[i];
        avg = sum / i+1;
    }
    cout << "The average marks is " << avg;
}