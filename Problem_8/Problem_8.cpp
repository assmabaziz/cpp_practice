#include <iostream>

using namespace std;
short Mark;

void readMark(short& Mark)
{
    cout << "Enter your mark: \n";
    cin >> Mark;
}

void checkMark(short Mark)
{
    if (Mark >= 50)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }
}

int main()
{
    short Mark;
    readMark(Mark);
    checkMark(Mark);
}

