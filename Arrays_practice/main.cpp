#include <iostream>

using namespace std;

void procedureReadValues ()
{
    int UserArray[3] ;
    float AverageGrades ;
    cout << "The first grade: " << "\n" ;
    cin >> UserArray[0] ;
    cout << "The second grade: " << "\n" ;
    cin >> UserArray[1] ;
    cout << "The third grade: " << "\n" ;
    cin >> UserArray[2] ;

    AverageGrades = (UserArray[0] + UserArray[1] + UserArray[2]) / 3.0 ;
    cout << "The average of those grades equals to: " << AverageGrades ;

}


int main()
{
    procedureReadValues() ;
    return 0;
}
