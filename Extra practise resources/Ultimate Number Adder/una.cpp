#include<iostream>
#include<windows.h>
using namespace std;
class UltimateNumberAdder
{
	protected:
		int n;
		int num[300];
    public:
        void GetNumbers()
        {
            cout << "How many numbers do you want to add?" << endl;
            cin >> n;
            for(int i = 0; i < n; i++)
            {
                cout << "Enter the number " << i + 1 << ":\t";
                cin >> num[i];
            }  
        }
        void AddNumbers()
        {
			int a = 0;
        	for(int j = 0; j < n; j++)
            {
                a = a + num[j];
            }
            cout << "The sum of numbers you entered is " << a << ".\n" << endl;
        }
        void fullscreen()
        {
            keybd_event(VK_MENU,0x38,0,0);
            keybd_event(VK_RETURN,0x1c,0,0);
            keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
            keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
        }
};
int main()
{
    UltimateNumberAdder UNA;
    UNA.fullscreen();
    a:
    	UNA.GetNumbers();
    	UNA.AddNumbers();
    goto a;
    return false;
}
