#include <iostream>
#include <string>

using namespace std;

string funcPrintName(string UserName)
{
    return UserName ;
}
void procedurePrintName()
{
    string UserName ;
    cout << "Enter you name: \n";
    cin >> UserName ;
    cout << "Hello " << UserName ;
}
int main()
{
    //procedurePrintName();

    string UserName ;
    cout << "Enter your name: \n" ;
    cin >> UserName ;
    cout << "Hello " << funcPrintName(UserName) ;

    return 0;
}
