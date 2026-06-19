#include <iostream>

using namespace std;

int main()
{
//============================================ First task ========================================

     string firstName;
     string lastName ;
     string cityName ;
     string countryName ;
     short int monthlySlary ;
     string gender ;
     bool isMarried ;

     cout << "Enter your name: \n";
     cin >> firstName ;

     cout << "Enter your last name: \n";
     cin >> lastName ;

     cout << "Where do you leave? \n";
     cin >> cityName ;

     cout << "Country: \n";
     cin >> countryName ;

     cout << "your salary: \n";
     cin >> monthlySlary ;

     cout << "Your gender: \n" ;
     cin >> gender ;

     cout << "Are you married ? " ;
     cin >> isMarried;


    cout << "**************************************** \n";
    cout << "First name: " << firstName << endl ;
    cout << "Last name: " << lastName << endl ;
    cout << "City: " << cityName << endl ;
    cout << "Country: " << countryName << endl ;
    cout << "Monthly salary: " << monthlySlary << endl ;
    cout << "Yearly salary: " << monthlySlary*12 << endl ;
    cout << "Gender: " << gender << endl ;
    cout << "Married: " << isMarried << endl ;
    cout << "**************************************** \n\n\n\n\n\n";




    //============================================ Second task ========================================


     short int firstVar ;
     short int secondVar ;
     short int thirdVar ;



    cout << "Enter the first number: \n";
    cin >> firstVar ;

    cout << "Enter the second number: \n";
    cin >> secondVar ;

    cout << "Enter the third number: \n" ;
    cin >> thirdVar ;
    cout << endl  << endl;

    cout << firstVar << "+ \n" ;
    cout << secondVar << "+ \n" ;
    cout << thirdVar << endl ;
    cout << "_______________________________________ \n";
    cout << "Total = " << firstVar + secondVar + thirdVar  << endl << endl << endl << endl << endl << endl << endl ;



    //============================================ Third task ========================================




     short int age ;

     cout << "Enter your age: \n" ;
     cin >> age ;

    cout << "After " << 30 - age << " years you'll be " <<  age + 5 << " years old";



    return 0;
}
