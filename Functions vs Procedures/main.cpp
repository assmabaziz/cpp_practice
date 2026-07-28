#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void procedureSum ()
{
    int FirstNumber ;
    int secondNumber ;

    cout << "Please enter number 1: \n" ;
    cin >> FirstNumber ;
    cout << "Please enter number 2: \n" ;
    cin >> secondNumber ;

    cout << "********************* \n" ;
    int Result = FirstNumber + secondNumber ;
    cout << Result << endl ;
}

int functionSum()
{
    int FirstNumber ;
    int secondNumber ;

    cout << "Please enter number 1: \n" ;
    cin >> FirstNumber ;
    cout << "Please enter number 2: \n" ;
    cin >> secondNumber ;

    cout << "********************* \n" ;
    int Result = FirstNumber + secondNumber ;
    return Result ;

}


int main()
{
    //procedureSum() ;
    int Result = functionSum() ;
    cout << "Result of function equals to: " << Result ;
    return 0;
}
