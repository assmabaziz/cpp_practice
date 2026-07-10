#include <iostream>

using namespace std;

int main()
{

    unsigned short int monthlyPayment ;
    unsigned short int loanAmount ;
    unsigned short int duration ;

    cout << "Enter The monthly payment: \n" ;
    cin >> monthlyPayment ;
    cout << "Enter The loan amount: \n" ;
    cin >> loanAmount ;
    duration = loanAmount / monthlyPayment ;
    cout << "You'll complete your loan after: " << duration << " Months" ;

    return 0;
}
