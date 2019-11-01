#include <iostream>
using namespace std;
main()
{
    int m[10][10], i, j;
    cout << "Enter elements of 2 x 3 matrix" << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> m[i][j];
        }
    }   
    cout << "The matrix is: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; i++)
        {
            cout << m[i][j];
        }
        cout << endl;
    }
}