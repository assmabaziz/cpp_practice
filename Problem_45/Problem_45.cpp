#include <iostream>

using namespace std;

short readMonthNumber()
{
    short  MonthNumber;
    cout << "Please enter the day number \n";
    cin >> MonthNumber;
    return MonthNumber;
}
string identifyMonth(short  MonthNumber)
{
    string Month;
    if (MonthNumber >= 1 && MonthNumber <= 12)
    {
        switch (MonthNumber)
        {
        case 1 :
            Month = "January";
            break;

        case 2 : 
            Month = "February";
            break;
        
        case 3 :
            Month = "March";
            break;

        case 4 :
            Month = "April";
            break;

        case 5 :
            Month = "May";
            break;

        case 6 :
            Month = "June";
            break;

        case 7 :
            Month = "July";
            break;

        case 8 :
            Month = "August";
            break;

        case 9 :
            Month = "September";
            break;

        case 10 :
            Month = "October";
            break;

        case 11 :
            Month = "November";
            break;

        case 12 :

            Month = "December";
            break;
        }
    }
    else
    {
        cout << "Please enter a valid number";
    }
    return Month;
}
int main()
{
    cout << identifyMonth(readMonthNumber());
}
