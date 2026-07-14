#include <iostream>

using namespace std;

int main()
{
     int firstNumber ;
     int secondNumber ;

    cout << "Please enter the first number: \n" ;
    cin >> firstNumber ;
    cout << "Please enter the second number: \n" ;
    cin >> secondNumber ;
    cout << firstNumber << " == " << secondNumber << " is: " <<  ( firstNumber == secondNumber )  << endl ;
    cout << firstNumber << " != " << secondNumber << " is: " <<  ( firstNumber != secondNumber )  << endl ;
    cout << firstNumber << " <= " << secondNumber << " is: " <<  ( firstNumber <= secondNumber )  << endl ;
    cout << firstNumber << " >= " << secondNumber << " is: " <<  ( firstNumber >= secondNumber )  << endl ;
    cout << firstNumber << " < " << secondNumber << " is: " <<  ( firstNumber < secondNumber )  << endl ;
    cout << firstNumber << " > " << secondNumber << " is: " <<  ( firstNumber > secondNumber )  << endl ;


    return 0;
}
