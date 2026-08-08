#include <iostream>
using namespace std;

int main()
{
    short Age;
    bool HasDriveLiscence;

    cout << "Enter your age: \n";
    cin >> Age;
    cout << "Do you have drve liscence? \n";
    cin >> HasDriveLiscence;
    if (Age > 18 && HasDriveLiscence == true)
    {
        cout << "Acepted";
    }
    else
    {

        cout << "Refused"; 
    }
}

