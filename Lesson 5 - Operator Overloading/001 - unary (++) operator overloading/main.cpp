// unary (++) operator overloading
#include <iostream>
using namespace std;
class Test
{
  private:
    int count;

  public:
    Test(int x)
    {
        count = x;
    }
    void operator++()
    {
        count = count + 1;
    }
    void display()
    {
        count << "Count = " << count << endl;
    }
};
main()
{
    Test ob(5);
    ++ob; // it calls function operator ++
    ob.display();
}