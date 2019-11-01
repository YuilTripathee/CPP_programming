/*
    Academic    Sport
       |__________|
             |
           Result

*/
// code:
#include <iostream>
using namespace std;
class Academic
{
    protected:
    char name[20];
    int m1, m2;

    public:
    void GetData1()
    {
        cout << "Enter name, mark1 and mark2: ";
        cin >> name >> m1 >> m2;
    }
};
class Sport
{
    protected:
    int m3;

    public:
    void GetData2()
    {
        cout << "Enter sports mark3: ";
        cin >> m3;
    }
};
class Result : public Academic, public Sport
{
    int tot;

    public:
    void ShowData()
    {
        tot = m1 + m2 + m3;
        cout << "Name: " << name << endl;
        cout << "Total: " << tot << endl;
    }
};
main()
{
    Result r;
    r.GetData1();
    r.GetData2();
    r.ShowData();
}