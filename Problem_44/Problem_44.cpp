
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
        if (DayNumber == 1) {
            WeekDay = "Saturday";
        }
        else if (DayNumber == 2)
        {
            WeekDay = "Sunday";
        }
        else if (DayNumber == 3)
        {
            WeekDay = "Monday";
        }
        else if (DayNumber == 4)
        {
            WeekDay = "Tuesday";
        }
        else if (DayNumber == 5)
        {
            WeekDay = "Wednesday";
        }
        else if (DayNumber == 6)
        {
            WeekDay = "Thursday";
        }
        else if(DayNumber == 7)
        {
            WeekDay = "Friday";
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
