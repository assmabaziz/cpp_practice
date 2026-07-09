#include <iostream>

using namespace std;

int main()
{
    short int pinny ;
    short int nickle ;
    short int dime ;
    short int quarter ;
    short int dollar ;
    float total ;

    cout << "Enter summ pinnies: \n";
    cin >> pinny ;
    cout << "Enter summ nickles: \n";
    cin >> nickle ;
    cout << "Enter summ dimes: \n";
    cin >> dime ;
    cout << "Enter summ quarters: \n";
    cin >> quarter ;
    cout << "Enter summ dollars: \n";
    cin >> dollar ;

    nickle *= 5 ;
    dime *= 10 ;
    quarter *= 25 ;
    dollar *= 100 ;

    cout << "pinnies: " << pinny << endl ;
    cout << "nickle to pinnies: " << nickle << endl ;
    cout << "dime to pinnies: " << dime << endl ;
    cout << "quarter to pinnies: " << quarter << endl ;
    cout << "dollar to pinnies: " << dollar << endl ;
    total = (pinny + nickle + dime + quarter + dollar ) / 100.0;
    cout << "Total: " << total ;

    return 0;
}
