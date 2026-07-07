#include <iostream>

using namespace std;

int main()
{
    short int firstMark;
    short int secondMark;
    short int thirtdMark;
    float averageMarks;

    cout << "Enter the first mark: \n";
    cin >> firstMark;
    cout << "Enter the second mark: \n";
    cin >> secondMark;
    cout << "Enter the third mark: \n";
    cin >> thirtdMark;

    averageMarks = (firstMark + secondMark + thirtdMark ) / 3.0 ;
     cout << "The average of: " << firstMark << ", " << secondMark << ", " << thirtdMark << " is: " << averageMarks ;

    return 0;
}
