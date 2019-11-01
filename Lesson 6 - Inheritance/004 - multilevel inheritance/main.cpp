/*
    Student
       |
      Exam
       |
     Result
*/
#include <iostream>
using namespace std;
class Student
{
    protected:
    char name;
    int roll_no;

    public:
    void GetData()
    {
        cout << "Enter roll_no and name of student: ";
        cin >> roll_no >> name;
    }
};
class Exam : public Student
{
    protected:
    float m1, m2, m3;

    public:
    void GetMark()
    {
        cout << "Enter mark1, mark2, mark3: ";
        cin >> m1 >> m2 >> m3;
    }
};
class Result : public Exam
{
    float total;
    public:
    void Display()
    {
        total = m1 + m2 + m3;
        cout << "Roll no: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Total: " << total << endl;
    }
};
main()
{
    Result ob;
    ob.GetData();
    ob.GetMark();
    ob.Display();
}