#include <iostream>

using namespace std;

short PinCode;
short const Balace = 7500;

void readPinCode(short& PinCode)
{
    cout << "Enter your pin code: \n";
    cin >> PinCode;
}

void checkPinCode(short PinCode)
{
    if (PinCode == 1234)
    {
        cout << "Your Balnce: " << Balace;
    }
    else
    {
        cout << "Wrong Pin code";
    }
}

int main()
{
   short  PinCode ;
   readPinCode(PinCode);
   checkPinCode(PinCode);
    return 0;
}