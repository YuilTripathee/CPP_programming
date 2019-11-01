#include<iostream>

using namespace std;

class FactiorialCalculator
{
    public:
        int CalculateFactorial()
        {
        	int num, ans;
        	a:
            cout << "Yuil>> Enter a number to calculate factorial: ";
            cin >> num;
            ans = GenerateFactorial(num);
            cout << "Factorial of " << num << " is " << ans << ".\n" << endl;
            goto a;
            return false;
        }
    private:
        int GenerateFactorial(int num)
        {
            if(num > 1)
            {
                return num * GenerateFactorial(num - 1);
            }
            else
            {
            	return 1;
            }
        }
};

int main()
{
	FactiorialCalculator Ake;
	Ake.CalculateFactorial();
    return false;
}
