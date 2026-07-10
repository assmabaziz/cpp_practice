#include <iostream>

using namespace std;

int main()
{
    short int billValue;
    float totalValue;

    cout << "Enter the bill value:  \n" ;
    cin >> billValue;
    totalValue = billValue * 1.1 ;
    totalValue = totalValue * 1.6 ;

    cout << "The total bill equals to: " << totalValue << endl ;

    return 0;
}
