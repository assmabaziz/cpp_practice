#include <iostream>

using namespace std;

short ReadNumber()
{
    short UserNumber;
    cout << "Enter a number: \n";
    cin >> UserNumber;
    return UserNumber;
}

short CalculateFactorial(short UserNumber)
{
    short Factorial = 1;
    for (short i = 1; i <= UserNumber; i++)
    {
        Factorial = Factorial * i; 
    }

    return Factorial;
}

int main()
{
    cout << "the factorial equals to: " << CalculateFactorial(ReadNumber());
    
}
