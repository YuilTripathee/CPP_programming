// sample program to demonstrate encapsulation
#include <iostream>
class Item
{
private:
    int qty;    // private data member
    float cost; // private data member
    
    void ShowCost()
    {
        cost = 250.6;
        cout << "\nCost Price = " << cost;
    }
public:
    int n;      // public data member
    void PutData()
    {
        n = 10;
        qty = n; // private data accessed by class
        cout << "\nQuantity of Items: " << qty;
    }
    void Display()
    {
        ShowCost(); // private member function accessed by class member
    }
};
main()
{
    Item ob1;
    ob1.PutData();  // object accessing public area
    Item ob2;
    ob2.PutData();  // object accessing public area
    Item ob3;
    ob3.Display();  // object cannot access the private function
    
}
