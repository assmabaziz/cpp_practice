#include <iostream>

using namespace std;

int main()
{
    short int totalBill;
    short int cashPaid;
    short int remainder;

    cout << "Enter the total bill: \n" ;
    cin >> totalBill ;
    cout << "Enter the cash paid: \n" ;
    cin >> cashPaid ;
    remainder = cashPaid - totalBill;
    cout << "The remainder equals to: " << remainder << endl ;

    return 0;
}
