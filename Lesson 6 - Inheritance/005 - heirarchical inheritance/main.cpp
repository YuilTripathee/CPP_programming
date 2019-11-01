/*
        Person
    _______|_______
    |             |
Student         Employee
        
*/
#include <iostream>
using namespace std;
class Person
{
    protected:
    char name;
    int age;

    public:
    void GetData1()
    {
        cout << "Enter name and age: " << end;
        cin >> name >> age;
    }
};
class Student : public Person
{
    protected:
    int roll, mark;

    public:
    void GetData2()
    {
        cout << "Enter roll number and marks: " << endl;
        cin >> roll >> mark;
    }
    void Display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll no: " << roll << endl;
        cout << "Mark: " << mark << endl;
    }
};
class Employee : public Person
{
    protected:
    int id, salary;

    public:
    void GetData3()
    {
        cout << "Enter id and salary: ";
        cin >> id >> salary;
    }
    void ShowData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Id no.: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};
main()
{
    Student s;
    s.GetData1();
    s.GetData2();
    s.Display();
    Employee e;
    e.GetData1();
    e.GetData2();
    e.ShowData();
}