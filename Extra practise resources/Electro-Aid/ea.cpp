//program to find resistance of 4 band resistor
#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
class Resistor_four
{
    public:
        int a, b, c, d, e, val;
        void getBandValues()
        {
            cout << "\nValue of first band\t:";
            cin >> a;
            cout << "Value of second band\t:";
            cin >> b;
            e = (a * 10) + b;
            cout << "Value of third band\t:";
            cin >> c;
            cout << "Value of fourth band\t:";
            cin >> d;
            val = e * pow(10,c);
            cout << "Value of resistance\t:" << val << endl;
        }

};
main()
{
    
	cout << "This program calculates resistance of 4 band resistor." << endl;
    Resistor_four RF;
    a:
		RF.getBandValues();
	goto a;
}
