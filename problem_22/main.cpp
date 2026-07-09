#include <iostream>

using namespace std;

int main()
{

    const float Pi = 3.14 ;
    short int firstDimension ;
    short int secondDimension ;
    float area ;

    cout << "Enter the first dimension: \n" ;
    cin >> firstDimension ;
    cout << "Enter the second dimension: \n" ;
    cin >> secondDimension ;
    area = (Pi * ((firstDimension * secondDimension) / 4 )) * (( 2.0 * firstDimension - secondDimension ) / (2.0 * firstDimension + secondDimension)) ;
    cout << "The circle area equals to: " << area ;

    return 0;
}
