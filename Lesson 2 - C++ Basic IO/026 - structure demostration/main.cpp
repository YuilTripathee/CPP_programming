#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    struct book
    {
        char name[20];
        char author[20];
        int price;
    }b1,b2; // structure variables declaration
    cout << "Enter book1 name" << endl;
    cin >> b1.name;
    cout << "Enter book1 author" << endl;
    cin >> b1.author;
    cout << "Enter book1 price" << endl;
    cin >> b1.price;
    cout << "Enter book2 name" << endl;
    cout << b2.name;
    cout << "Enter book2 author" << endl;
    cout << b2.author;
    cout << "Enter book2 price" << endl;
    cout << b2.price;
    // outputs section
    cout << "The details are: " << endl;
    cout << "Name" << setw(10) << "Author" << setw(10) << "Price" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << b1.name << setw(10) << b1.author << setw(10) << b1.price << endl;
    cout << b2.name << setw(10) << b2.author << setw(10) << b2.price << endl;
}