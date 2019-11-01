/*
    Student     Sport
      |           |
     Exam         |
      |___________|
            |
          Result
*/
// code:
#include <iostream>
using namespace std;
class Student
{
    protected:
    char name = "Bishwo";
};
class Exam : public Student
{
    protected:
    int m1 = 50, m2 = 70;
};
class Sport
{
    protected:
    int m3 = 80;
};
class Result : public Exam, public Sport
{
    int tot;

    public:
    void Display()
    {
        tot = m1 + m2 + m3;
        cout << "Name: " << name << endl;
        cout << "Total: " << tot << endl;
    }
};
main()
{
    Result r;
    r.Display();
}