#include <iostream>

using namespace std;

short ReadCounter()
{
    short Counter;
    cout << "Enter the counter: \n";
    cin >> Counter;
    return Counter;
}

short CalculateSumEven(short Counter)
{
    short Sum = 0;
    for (short i = 0 ; i <= Counter ; i ++)
    {
        if ( i % 2 == 0 )
        {
            Sum = Sum + i;
        }
    }
    return Sum;
}
int main()
{
    cout << CalculateSumEven(ReadCounter());
}
