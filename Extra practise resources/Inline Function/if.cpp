#include<iostream>
using namespace std;
int max(int p, int q)
{
    return (p > q)?p:q;
}
int main()
{
    int a, b;
	cin >> a >> b;
    cout << "Maximum: " << max(a,b);
    return 0;
}
