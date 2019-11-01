#include <iostream>
using namespace std;
// this section is base class
class Student
{
protected:
    int rn;
    char name[20];
public:
    void GetRoll()
    {
        cout << "Enter roll number: ";
        cin >> name;
    }
};
// derived class section
class Exam : public Student
{
public:
    void ShowData()
    {
        cout << "Roll number is :" << rn << endl;
        cout << "Name is :" << name << endl;
    }
};
// main program section
main()
{
    Exam ob;
    // coming from base class
    ob.GetRoll();
    ob.GetName();
    // coming from derived class
    ob.ShowData();
}
