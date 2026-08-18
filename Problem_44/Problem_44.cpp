
#include <iostream>

using namespace std;

enum enWeekDays {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5, Fri = 6, Satu = 7};

void readDayNumber()
{
    cout << "Please choose the day number \n";
    cout << "*********************************\n";
    cout << "1: Sunday\n";
    cout << "2: Monday\n";
    cout << "3: Tuesday\n";
    cout << "4: Wednsday\n";
    cout << "5: Thursday\n";
    cout << "6: Friday\n";
    cout << "7: Saturday\n";
    cout << "*********************************\n";
}

enWeekDays GetWeekDayNumber()
{
    short  UserNumber;
    cin >> UserNumber;
    return (enWeekDays)UserNumber;
}

string GetWeekDayName(enWeekDays  DayNumber)
{

    switch (DayNumber)
    {
    case enWeekDays::Sun:
        return  "Sunday";
        break;

    case enWeekDays::Mon:
        return "Monday";
        break;

    case enWeekDays::Tue:
        return "Tuesday";
        break;

    case enWeekDays::Wed:
        return "Wednesday";
        break;

    case enWeekDays::Thur:
        return "Thursday";
        break;

    case enWeekDays::Fri:
        return "Friday";
        break;

    case enWeekDays::Satu:
        return "Saturday";
        break;
    default:
        return "Please enter a valid number from 1 to 7";
       
    }  
}

int main()
{
   readDayNumber();
   cout << GetWeekDayName(GetWeekDayNumber());
   
}
