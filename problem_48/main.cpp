#include <iostream>

using namespace std;

int main()
{
/*
    unsigned short int loanAmount ;
    short int totalMonths ;
    float monthlyAmount ;

    cout << "Enter the loan amount: \n" ;
    cin >> loanAmount ;
    cout << "How many months you need to complete your loan: \n" ;
    cin >> totalMonths ;
    monthlyAmount = (loanAmount * 1.0 )/ totalMonths ;
    cout << "You need to pay: " << monthlyAmount << " every month." ;
    */


    short int A = 10 ;
    short int B = 10 ;
    short int c ;

    c = A++ ;
    cout << "A++: " << c << endl;
    cout << "A: " << A << endl ;
    c = ++B;
    cout << "++B: " << c << endl;
    cout << "B: " << B << endl ;

    return 0;
}
