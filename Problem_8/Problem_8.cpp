#include <iostream>

using namespace std;

int main()
{
    short Mark;
    cout << "Enter your mark:\n";
    cin >> Mark;
    if (Mark >= 50)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }
}

