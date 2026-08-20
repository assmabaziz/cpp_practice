#include <iostream>

using namespace std;

short ReadCounter()
{
    short Counter;
    cout << "Enter the counter: \n";
    cin >> Counter;
    return Counter;
}

void PrintNumbers(short Counter)
{
    for(short i = 0; i <= Counter; i++)
    {
        cout << i << endl;
    }
}

int main()
{
    PrintNumbers(ReadCounter());
}

