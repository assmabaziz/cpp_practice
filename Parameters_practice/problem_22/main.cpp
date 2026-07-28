#include <iostream>
#include <cmath>

using namespace std;

float funcCalcArea(unsigned short firstDimension , unsigned short secondDimension)
{
    const float Pi = 3.14 ;
    return (Pi * ((firstDimension * secondDimension) / 4 )) * (( 2.0 * firstDimension - secondDimension ) / (2.0 * firstDimension + secondDimension)) ;
}

int main()
{

    unsigned short firstDimension ;
    unsigned short secondDimension ;
    float Area ;

    cout << "Enter the first dimension: \n" ;
    cin >> firstDimension ;
    cout << "Enter the second dimension: \n" ;
    cin >> secondDimension ;
    Area = funcCalcArea(firstDimension , secondDimension) ;
    cout << "The circle area equals to: " << Area << endl;
    cout << "The floor of area equals to: " << floor(Area) ;

    return 0;
}
