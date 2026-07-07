#include <iostream>

using namespace std;

int main()
{
    short int firstNumber;
    short int secondNumber;
    short int thirdNumber;


    cout << "Enter the first number: \n";
    cin >> firstNumber;
    cout << "Enter the second number: \n";
    cin >> secondNumber;
    cout << "Enter the third number: \n";
    cin >> thirdNumber;

    short int sumNumbers =  firstNumber + secondNumber + thirdNumber ;

    cout << "The sum of: " << firstNumber << ", " << secondNumber << ", " << thirdNumber << " is: " << sumNumbers;


    return 0;
}
