#include <iostream>

using namespace std;

int main()
{
   short  PinCode ;
   short const Balace = 7500;

   cout << "Enter your pin code: \n";
   cin >> PinCode;

   if (PinCode == 1234)
   {
       cout << "Your balance is:" << Balace;
   }
   else
   {
       cout << "Wrong Pin code";
   }
    return 0;
}