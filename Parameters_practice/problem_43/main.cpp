#include <iostream>

using namespace std;

int main()
{
    unsigned int totalSeconds ;
    short int totalDays ;
    short int totalHours ;
    short int totalMinutes ;
    short int rest ;
    short int remainder ;
    const int secondsPerDays = 86400 ;
    const int secondsPerHour = 3600 ;
    const int secondsPerMunites = 60 ;

    cout << "Enter the number of seconds: \n" ;
    cin >> totalSeconds ;
    totalDays = totalSeconds / secondsPerDays ;
    remainder = totalSeconds % secondsPerDays ;
    totalHours = remainder / secondsPerHour ;
    remainder = remainder % secondsPerHour ;
    totalMinutes = remainder / secondsPerMunites ;
    remainder = remainder % secondsPerMunites ;
    totalSeconds = remainder ;
    cout << "Days: " << totalDays << endl << "Hours: " << totalHours << endl << "Minutes: " << totalMinutes << endl << "Seconds: " << totalSeconds << endl ;

    return 0;
}
