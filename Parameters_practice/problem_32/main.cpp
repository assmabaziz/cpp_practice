#include <iostream>
#include <cmath>

using namespace std;

int funcCalcPower (int baseNumber , int  powerNumber)
{
    int Result ;
    Result = pow(baseNumber , powerNumber) ;
    return Result ;
}


int main()
{
    short baseNumber ;
    short powerNumber ;
    int Result ;

    cout << "Please enter the base:  \n" ;
    cin >> baseNumber ;
    cout << "Please enter the power: \n" ;
    cin >> powerNumber ;
    Result = funcCalcPower(baseNumber , powerNumber) ;
    cout << "The number: " << baseNumber << " to power: " << powerNumber << " equals to: " << Result << endl ;
    cout << "The round of area equals to: " << round(Result) ;

    return 0;
}
