#include <iostream>

using namespace std;

enum enMartialStatus {Married, Single};
enum enGender {Male, Female};

struct stPatientAdress
{
    string StreetName ;
    string BuildingNumber ;
    string POBox ;
    string ZipCode ;
};

struct stContactInfo
{
    string PhoneNumber ;
    string Email ;
    stPatientAdress Adress ;
};

struct stDoctorAdress
{
    string StreetName ;
    string BuildingNumber ;
    string POBox ;
    string ZipCode ;
};

struct stDoctorInfo
{
    string FullName ;
    string Email ;
    string PhoneNumber ;
    stDoctorAdress DoctorAdress ;
};

struct stGeneralInfo
{
    string FirstName ;
    string LastName ;
    string Age ;
    enGender Gender ;
    stContactInfo ContactInfo ;
    stDoctorInfo DoctorInfo ;
};

struct stIlnessHistory
{
    string Start ;
    string symptomes ;
};

struct stRiskFctors
{
    string PastIlnesses ;
    string Surgeries ;
    string Allergies ;
    string FamilyHistory ;
};

struct stLifeStyle
{
    string CurrentMedication ;
    string Habbits ;
    string Profession ;
};

struct stIlnessDetails
{
    string signs ;
    string intensity ;
    stIlnessHistory IlnessHistory ;
    stRiskFctors RiskFactors ;
    stLifeStyle LifeStyle ;
};

struct stPatiet
{
    stGeneralInfo GeneralInfo ;
    string ConsultationReason ;
    stIlnessDetails IlnessDetails ;

};

int main()
{

    stPatiet Patient1 ;

    Patient1.GeneralInfo.FirstName = "jkfghdfg" ;
    Patient1.GeneralInfo.LastName = "kljdglkdjfg" ;
    Patient1.GeneralInfo.Age = "55" ;
    Patient1.GeneralInfo.ContactInfo.PhoneNumber = "+797755555555" ;
    Patient1.GeneralInfo.DoctorInfo.FullName = "kjghkjhgjhghjg" ;
    Patient1.GeneralInfo.DoctorInfo.DoctorAdress.ZipCode = "5566895" ;

    cout << "Patient1.GeneralInfo.FirstName: " << Patient1.GeneralInfo.FirstName << "\n" ;
    cout << "Patient1.GeneralInfo.LastName: " << Patient1.GeneralInfo.LastName << "\n" ;
    cout << "Patient1.GeneralInfo.DoctorInfo.FullName " << Patient1.GeneralInfo.DoctorInfo.FullName << endl ;


    return 0;
}
