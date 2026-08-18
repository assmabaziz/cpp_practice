#include <iostream>

using namespace std;

enum enYearMonth {Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12};

void readMonthNumber()
{
    cout << "Please choose the day number from the list: \n";
    cout << "*****************************************\n";
    cout << "                List                     \n";
    cout << "*****************************************\n";
    cout << "1: January\n";
    cout << "2: February\n";
    cout << "3: March\n";
    cout << "4: April\n";
    cout << "5: May\n";
    cout << "6: June\n";
    cout << "7: July\n";
    cout << "8: August\n";
    cout << "9: September\n";
    cout << "10: October\n";
    cout << "11: November\n";
    cout << "12: December\n";
}

enYearMonth GetMonthNumber()
{
    short  UserNumber;
    cin >> UserNumber;
    return (enYearMonth) UserNumber;
}

string GetMonthName(enYearMonth  MonthNumber)
{
    
        switch (MonthNumber)
        {
        case enYearMonth::Jan:
            return "January";
            break;

        case enYearMonth::Feb:
            return "February";
            break;
        
        case enYearMonth::Mar:
            return "March";
            break;

        case enYearMonth::Apr:
            return "April";
            break;

        case enYearMonth::May:
            return "May";
            break;

        case enYearMonth::Jun:
            return "June";
            break;

        case enYearMonth::Jul:
            return "July";
            break;

        case enYearMonth::Aug:
            return "August";
            break;

        case enYearMonth::Sep:
            return "September";
            break;

        case enYearMonth::Oct:
            return "October";
            break;

        case enYearMonth::Nov:
            return "November";
            break;

        case enYearMonth::Dec:
            return "December";
            break;
        default :
            return "Please enter a valid number from 1 to 12";
        }
}

int main()
{
    readMonthNumber();
    cout << GetMonthName(GetMonthNumber());
}
