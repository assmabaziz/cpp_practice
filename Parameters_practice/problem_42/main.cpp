#include <iostream>

using namespace std;

int main()
{
    short int totalDays ;
    short int totalHours ;
    short int totalMinutes ;
    short int totalSeconds ;
    unsigned int totalTime ;

    cout << "Enter the number of days \n" ;
    cin >> totalDays ;
    cout << "Enter the number of hours \n" ;
    cin >> totalHours ;
    cout << "Enter the number of munites \n" ;
    cin >> totalMinutes ;
    cout << "Enter the number of seconds \n" ;
    cin >> totalSeconds ;

    totalTime = totalSeconds + (totalMinutes * 60) + (totalHours * 3600) + (totalDays * 86400);
    cout << totalTime ;

    return 0;
}
