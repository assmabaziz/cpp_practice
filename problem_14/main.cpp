#include <iostream>

using namespace std;
void procedureSwapNum(int &Num1 , int &Num2 )
{
    int TempVar ;
    cout << "The first number before swap: " << Num1  << "\n" ;
    cout << "The second number before swap: " << Num2 << "\n" ;
    TempVar = Num1 ;
    Num1 = Num2 ;
    Num2 = TempVar ;
    cout << "The first number after swap: " << Num1  << "\n" ;
    cout << "The second number after swap: " << Num2 << "\n" ;
    cout << "The ref of first param: " << &Num1 << "\n" ;
    cout << "The ref of second param: " << &Num2 << "\n" ;
}
int main()
{

    int FirstNumber ;
    int SecondNumber;

    cout << "Enter the first number: \n" ;
    cin >> FirstNumber;
    cout << "Enter the second number: \n" ;
    cin >> SecondNumber;

    procedureSwapNum(FirstNumber , SecondNumber);
    cout << "The ref of first number: " << &FirstNumber << "\n" ;
    cout << "The ref of second number: " << &SecondNumber << "\n" ;

    cout << "First Number after swap inside the main function: " << FirstNumber << "\n" ;
    cout << "Second Number after swap inside the main function: " << SecondNumber << "\n" ;

    return 0;
}
