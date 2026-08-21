#include <iostream>

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
    cout << "Enter the base number: \n";
    cin >> BaseNum;
    return BaseNum;
}

int CalculatePower(short PowerNum, short BaseNum)
{
    int Result = 1;

    for (short i = 1; i <= PowerNum; i++)
    {
        Result = Result * BaseNum;
    }
    return Result;
}

int main()
{
    cout << CalculatePower(ReadPowerNum(), ReadBaseNum());
}
