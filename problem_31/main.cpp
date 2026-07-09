#include <iostream>

using namespace std;

int main()
{
    short int firstNumber;
    short int secondNumber;
    short int thirdNumber ;
    short int userNumber;

    cout << "Enter a number: " ;
    cin >> userNumber ;
    firstNumber = userNumber * userNumber ;
    secondNumber = firstNumber * userNumber ;
    thirdNumber = secondNumber * userNumber ;
    cout << "Your number power 2 : " << firstNumber  << endl ;
    cout << "Your number power 3 : " << secondNumber << endl ;
    cout << "Your number power 4 : " << thirdNumber << endl ;

    return 0;
}
