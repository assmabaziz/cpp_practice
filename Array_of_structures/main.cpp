#include <iostream>

using namespace std;

struct strPersonInfo
{
    string FirstName ;
    string LastName ;
    int Age ;
    string Phone ;
};

void readInfoOnePerson (strPersonInfo &Info)
{
    cout << "First name: " << "\n" ;
    cin >> Info.FirstName ;
    cout << "Last name: " << "\n" ;
    cin >> Info.LastName ;
    cout << "Age: " << "\n" ;
    cin >> Info.Age ;
    cout << "Phone number: " << "\n" ;
    cin >> Info.Phone ;
}
void printInfoOnePerson (strPersonInfo Info)
{
    cout << "******************************* \n" ;
    cout << "First name: " << Info.FirstName  << "\n" ;
    cout << "Last name: " << Info.LastName << "\n" ;
    cout << "Age: " << Info.Age << "\n" ;
    cout << "Phone number: " << Info.Phone << "\n" ;
}

void readInfoTwoPersons (strPersonInfo Persons[2])
{
    readInfoOnePerson(Persons[0]) ;
    readInfoOnePerson(Persons[1]) ;

}

void printInfoTwoPersons (strPersonInfo Persons[2])
{
    printInfoOnePerson(Persons[0]) ;
    printInfoOnePerson(Persons[1]) ;
}

int main()
{
    strPersonInfo Persons[2];
    readInfoTwoPersons(Persons);
    printInfoTwoPersons (Persons) ;

    return 0;
}
