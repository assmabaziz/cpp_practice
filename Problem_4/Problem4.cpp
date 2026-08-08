#include <iostream>

using namespace std;

int Age;

void readAge(int & Age)
{
    cout << "Enter your age: \n";
    cin >> Age;  
}

bool checkAge(int Age)
{
    if (Age > 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkDriveLiscence()
{
    bool Result;
    cout << "Do you have drive liscence? \n";
    cin >> Result;
    if (Result == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Age;
    bool resultCheckAge;
    bool resultCheckDLiscence;

    readAge(Age);
    resultCheckAge = checkAge(Age);
    resultCheckDLiscence = checkDriveLiscence();

    if (resultCheckAge == true && resultCheckDLiscence == true)
    {
        cout << "Accepted";
    }
    else
    {
        cout << "Refused";
    }

    return 0;
    
}

