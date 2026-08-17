#include <iostream>

using namespace std;

enum enWeekDay { sun = 1, Mon = 2, Tue = 3, Wed = 4, Thur = 5, Fri = 6, Satu = 7 };

void Showmenu() {
    cout << "Please choose a day from the menu:\n\n\n";
    cout << "*************************\n";
    cout << "          Menu           \n";
    cout << "*************************\n";
    cout << "1: Sunday\n";
    cout << "2: Monday\n";
    cout << "3: Tuesday\n";
    cout << "4: Wednsday\n";
    cout << "5: Thursday\n";
    cout << "6: Friday\n";
    cout << "7: Saturday\n";
}

enWeekDay ReadWeekDay()
{
    int UserNumber;
    cin >> UserNumber;
    return (enWeekDay)UserNumber;
}

string GetWeekDayName(enWeekDay WeekDay)
{
    switch (WeekDay)
    {
    case enWeekDay::sun:
        return "Sunday";
        break;
    case enWeekDay::Mon:
        return "Monday";
        break;
    case enWeekDay::Tue:
        return "Tuasday";
        break;
    case enWeekDay::Wed:
        return "Wednsday";
        break;
    case enWeekDay::Thur:
        return "Thursday";
        break;
    case enWeekDay::Fri:
        return "Friday";
        break;
    case enWeekDay::Satu:
        return "Saturday";
        break;
    default:
        return"Not a week day";
    }
}

int main()
{
    Showmenu();
    cout <<"Today is : " << GetWeekDayName(ReadWeekDay());
}
