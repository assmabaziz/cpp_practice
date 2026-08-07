#include <iostream>

using namespace std;

struct strPersonInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

void procReadInfoOnePerson(strPersonInfo &PersonInfo)
{
    cout << "First name: " << "\n";
    cin >> PersonInfo.FirstName;
    cout << "Last name: " << "\n";
    cin >> PersonInfo.LastName;
    cout << "Age: " << "\n";
    cin >> PersonInfo.Age;
    cout << "Phone number: " << "\n";
    cin >> PersonInfo.Phone;
    
}

void procPrintInfoOnePerson(strPersonInfo PersonInfo)
{
    cout << "\n*****************************\n";
    cout << "First name: " << PersonInfo.FirstName << "\n";
    cout << "Last name: " << PersonInfo.LastName << "\n";
    cout << "Age: " << PersonInfo.Age << "\n";
    cout << "Phone number: " << PersonInfo.Phone << "\n";
    cout << "*****************************\n";
}

void readInfoTwoPersons(strPersonInfo Persons[2])
{
    procReadInfoOnePerson(Persons[0]);
    procReadInfoOnePerson(Persons[1]);
}

void printInfoTwoPersons(strPersonInfo Persons[2]) 
{
    procPrintInfoOnePerson(Persons[0]);
    procPrintInfoOnePerson(Persons[0]);

}
int main()
{
    strPersonInfo Persons[2];
    readInfoTwoPersons(Persons);
    printInfoTwoPersons(Persons);
    
}

