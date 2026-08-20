#include <iostream>
using namespace std;

short ReadCounter()
{
    short Counter;
    cout << "Enter the counter: \n";
    cin >> Counter;
    return Counter;
}
void PrintOddNumbers(short Counter)
{
    for (short i = 0; i <= Counter ; i ++)
    {
        if (i % 2 == 1)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintOddNumbers(ReadCounter());
}
