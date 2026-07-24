#include <iostream>

using namespace std;

enum enGendor {male , female};
enum enColor {Red, Green, Yellow};
enum enMartialStatus {Married, Single};

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
 struct stAdditionalInfo
 {
     enGendor Gendor ;
     enMartialStatus MartialStatus ;
     enColor FavoriteColor ;
      };

 struct stPerson
 {
     string FirstName ;
     string LastName ;
     stAdditionalInfo AdditionalInfo;
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
    Person1.AdditionalInfo.FavoriteColor = enColor::Green ;

    cout << Person1.ContactInfo.Adress.SrteetName ;
    cout << "Favorite color:  " << Person1.AdditionalInfo.FavoriteColor;


    return 0;
}
