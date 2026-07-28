#include <iostream>

using namespace std;



void funcPrintData ()
{
    string FullName ;
    short Age ;
    string City ;
    string Country ;

    cout << "Enter your name: \n" ;
    cin.ignore(1 , '\n') ;
    getline(cin , FullName) ;

    cout << "Enter your age: \n" ;
    cin >> Age ;

    cout << "Enter your city: \n" ;
    cin.ignore(1 , '\n') ;
    getline(cin , City) ;

    cout << "Enter your country:  \n" ;
    cin.ignore(1 , '\n') ;
    getline(cin , Country) ;



    cout << "***********************************************\n" ;
    cout << "Name: " << FullName << "\n" ;
    cout << "Age: " << Age << "\n" ;
    cout << "City: " << City << "\n" ;
    cout << "Country: " << Country << "\n" ;
    cout << "***********************************************\n \n \n" ;
}

void funcPrintStars()
{
    cout << "******************* \n" ;
    cout << "******************* \n" ;
    cout << "******************* \n" ;
}

void funcPintWishes ()
{
    cout << "I love programming \n" ;
    cout << "I promise to be the best developer ever" << endl ;
    cout << "I know it will take some time to practice but I'll achieve my goal inshalah \n" ;
    cout << "Best regards \n" ;
    cout << "Assma Baziz \n \n \n \n \n" ;
}

void funcPrintH ()
{
    cout << "**      **\n" ;
    cout << "**      **\n" ;
    cout << "**      **\n" ;
    cout << "**********\n" ;
    cout << "**********\n" ;
    cout << "**      **\n" ;
    cout << "**      **\n" ;
    cout << "**      **" << endl << endl << endl  ;

}

int main()
{
    funcPrintData() ;
    funcPintWishes() ;
    funcPrintStars() ;
    funcPrintH() ;
    return 0;
}
