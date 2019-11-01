// WAP to create a class Book having three member variables (name, author, price) and
// two member functions GetData() which recieves the data from user, and ShowData() 
// then display the information of book.
#include <iostream>
using namespace std;
class Book
{
    char name[20], author[20];
    float price;
public:
    void GetData()
    {
        cout << "Enter name, author and price of the book: " << endl;
        cin >> name >> author >> price;
    }
    void ShowData()
    {
        cout << "Details of book: " << endl;
        cout << "Book name: " << name << endl;
        cout << "Book author: "; << author << endl;
        cout << "Book price: " << price << endl;
    }
};
main()
{
    Book b1;
    b1.GetData();
    b1.ShowData();
}