#include<iostream>
#include<windows.h>

using namespace std;

class MultiplicationTable
{
    public:
    	void fullscreen()
		{
		    keybd_event(VK_MENU,0x38,0,0);
		    keybd_event(VK_RETURN,0x1c,0,0);
		    keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
		    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
		}
        int TableGenerator()
        {
        	int num, ans;
        	cout << "CodeDragon's multiplication table program" << endl;
        	a:
	            cout << "CodeDragon>> Enter a number to generate multiplication table: ";
	            cin >> num;
	            GenerateTable(num);
	            cout << "\n\a";
            goto a;
            return false;
        }
    private:
        int GenerateTable(Radius)
        {
        	cout << "\n************************ Multiplication table of " << num << " ************************" << endl;
        	cout << "\n";
            for(int i = 1; i <= 20; i++)
            {
                cout << num << " X " << i << " = " << num * i << endl;
            }
        }
};

int main()
{
	MultiplicationTable Ake;
	Ake.fullscreen();
	Ake.TableGenerator();
    return false;
}
