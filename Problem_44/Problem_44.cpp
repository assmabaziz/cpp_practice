
#include <iostream>

using namespace std;

short readDayNumber()
{
    short  DayNumber;
    cout << "Please enter the day number \n";
    cin >> DayNumber;
    return DayNumber;
}
string identifyWeekDay(short  DayNumber)
{
    string WeekDay;

    if (DayNumber >= 1 && DayNumber <= 7 )
    {
        switch (DayNumber)
        {
        case 1:
            WeekDay = "Saturday";
            break;

        case 2:
            WeekDay = "Sunday";
            break;

        case 3:
            WeekDay = "Monday";
            break;

        case 4:
            WeekDay = "Tuesday";
            break;

        case 5:
            WeekDay = "Wednesday";
            break;

        case 6:
            WeekDay = "Thursday";
            break;

        case 7:
            WeekDay = "Friday";
            break;
        }
    }
    else
    {
        cout << "Please enter a valid number";
    }
    return WeekDay;
}
int main()
{
   cout <<  identifyWeekDay(readDayNumber());
}
