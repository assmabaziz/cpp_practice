#include <iostream>
#include <cmath>

using namespace std;

short ReadPowerNum()
{
    short PowerNum;
    cout << "Enter the power number: \n";
    cin >> PowerNum;
    return PowerNum;
}

short ReadBaseNum()
{
    short BaseNum;
    cout << "Enter the power number: \n";
    cin >> BaseNum;
    return BaseNum;
}

int CalculatePower(short PowerNum, short BaseNum)
{
    int Result = 1;

    for (short i = 0; i <= PowerNum; i++)
    {
        Result = Result * BaseNum;
    }
    return Result;
}

int main()
{

   cout << CalculatePower(ReadPowerNum(), ReadBaseNum());

    /*
    short baseNumber ;
    short powerNumber ;
    unsigned int result ;

    cout << "Please enter the base:  \n" ;
    cin >> baseNumber ;
    cout << "Please enter the power: \n" ;
    cin >> powerNumber ;
    result = pow(baseNumber , powerNumber) ;
    cout << "The number: " << baseNumber << " to power: " << powerNumber << " equals to: " << result << endl ;
    cout << "The round of area equals to: " << round(result) ;

    return 0;
    */
}
