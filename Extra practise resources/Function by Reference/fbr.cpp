#include<iostream>
using namespace std;
int swap(int &x, int &y);
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "Before swap: " << a << " " << b << endl;
    swap(a,b);
    cout << "After swap: " << a << " " << b << endl;
    return 0;
}
int swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return 0;
}
