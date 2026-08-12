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
        if (MonthNumber == 1) {
            Month = "January";
        }
        else if (MonthNumber == 2)
        {
            Month = "February";
        }
        else if (MonthNumber == 3)
        {
            Month = "March";
        }
        else if (MonthNumber == 4)
        {
            Month = "April";
        }
        else if (MonthNumber == 5)
        {
            Month = "May";
        }
        else if (MonthNumber == 6)
        {
            Month = "June";
        }
        else if (MonthNumber == 7)
        {
            Month = "July";
        }
        else if (MonthNumber == 8)
        {
            Month = "August";
        }
        else if (MonthNumber == 9)
        {
            Month = "September";
        }
        else if (MonthNumber == 10)
        {
            Month = "October";
        }
        else if (MonthNumber == 11)
        {
            Month = "November";
        }
        else if (MonthNumber == 12)
        {
            Month = "December";
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
