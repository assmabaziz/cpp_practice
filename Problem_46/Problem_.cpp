#include <iostream>

using namespace std;

void PrintCapitalLetters()
{
    short Counter = 90;

    cout << "***********************\n";
    cout << "Capital Letters\n";
    cout << "***********************\n";

    for (short i = 65; i <= Counter; i++)
    {
        cout << char(i) << endl;
    }
    
}
void PrintSmallLetters()
{
    short Counter = 122;

    cout << "***********************\n";
    cout << "Small Letters\n";
    cout << "***********************\n";

    for (short i = 97; i <= Counter; i++)
    {
        cout << char(i) << endl;
    }

}

int main()
{
    PrintSmallLetters();
    PrintCapitalLetters();
}
