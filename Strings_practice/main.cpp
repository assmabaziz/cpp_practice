#include <iostream>
#include <string>

using namespace std;

int main()
{
    string FullName ;
    string StringTest1 ;
    string StringTest2 ;
    cout << "Enter your full name? \n" ;
    getline(cin, FullName);
    cout << "Enter the second string here: \n" ;
    cin >> StringTest1 ;
    cout << "Enter the last string here: \n" ;
    cin >> StringTest2 ;

    cout << "\n**************************************************\n" ;
    cout << "The length of: " << FullName << " is:" << FullName.length() ;
    cout << "The characters at 0,2,4,7 are: " << FullName[0] << " ," << FullName[2] << " ," << FullName[4] << " ," << FullName[7] <<"\n" ;
    cout << "Concatenating the second and the third strings: " << StringTest1 + StringTest2 << "\n" ;
    int Result = stoi(StringTest1) * stoi(StringTest2);

    cout << StringTest1 << " * " << StringTest2 << " = " << Result ;

    return 0;
}


