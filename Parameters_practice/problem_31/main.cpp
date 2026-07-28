#include <iostream>
#include <cmath>

using namespace std;

void procedureCalcPower(int UserNumber)
{

    short int firstNumber;
    short int secondNumber;
    short int thirdNumber ;

    firstNumber = pow(UserNumber , 2) ;
    secondNumber = pow(UserNumber , 3) ;
    thirdNumber = pow(UserNumber , 4) ;
    cout << "Your number power 2 : " << firstNumber  << endl ;
    cout << "Your number power 3 : " << secondNumber << endl ;
    cout << "Your number power 4 : " << thirdNumber << endl ;

}

int main()
{
    int UserNumber;

    cout << "Enter a number: " ;
    cin >> UserNumber ;

    procedureCalcPower(UserNumber) ;

    return 0;
}
