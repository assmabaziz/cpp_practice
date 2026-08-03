#include <iostream>

using namespace std;

void procedureReadValues (int UserArray[3])
{

    cout << "The first grade: " << "\n" ;
    cin >> UserArray[0] ;
    cout << "The second grade: " << "\n" ;
    cin >> UserArray[1] ;
    cout << "The third grade: " << "\n" ;
    cin >> UserArray[2] ;

}

float procedureCalculateAverage(int UserArray[3])
{

    return ( UserArray[0] + UserArray[1] + UserArray[2] ) / 3.0 ;
}

int main()
{
    int UserArray[3] ;

    procedureReadValues(UserArray) ;
    cout << "The average of those values: " << procedureCalculateAverage(UserArray) ;
    return 0;
}
