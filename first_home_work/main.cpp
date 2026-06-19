#include <iostream>

using namespace std;

int main()
{
    //============================================ First task ========================================
    const string firstName = "Assma";
    const string lastName = "Baziz";
    const string cityName = "Saint Petersburg";
    const string countryName = "Russia";
    const int monthlySlary = 2500;
    const string gender = "Female";
    const bool isMarried = false;

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

    const int firstVar = 20 ;
    const int secondVar =  30 ;
    const int thirdVar = 10 ;

    cout << firstVar << "+ \n" ;
    cout << secondVar << "+ \n" ;
    cout << thirdVar << endl ;
    cout << "_______________________________________ \n";
    cout << "Total = " << firstVar + secondVar + thirdVar  << endl << endl << endl << endl << endl << endl << endl ;

    //============================================ Third task ========================================

    const int age = 25;

    cout << "After " << 30 - age << " years you'll be " <<  age + 5 << " years old";

    return 0;
}
