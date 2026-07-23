#include <iostream>

using namespace std;


struct stAdress
 {
     string PoBox ;
     string stringZipCode ;
     string SrteetName ;
     string BuildingNo ;

 }   ;

 struct stContactInfo
 {
     string Email ;
     string PhoneNumber ;
     stAdress Adress ;
 };

 struct stPerson
 {
     string FirstName ;
     string LastName ;
     stContactInfo ContactInfo ;
 };



int main()
{
    stPerson Person1;

    Person1.LastName = "Baziz";
    Person1.FirstName = "Assma";
    Person1.ContactInfo.Email = "assma.baziz@yahoo.com";
    Person1.ContactInfo.PhoneNumber = "+79779197013";
    Person1.ContactInfo.Adress.SrteetName  = "Udarnikov";
    Person1.ContactInfo.Adress.BuildingNo = "27K1";

    cout << Person1.ContactInfo.Adress.SrteetName ;


    return 0;
}
