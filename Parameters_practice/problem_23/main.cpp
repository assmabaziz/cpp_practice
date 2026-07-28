#include <iostream>
#include <cmath>

using namespace std;

float funcCalcArea(unsigned short firstDimension , unsigned short secondDimension , unsigned short thirdDimension)
{
    const float Pi = 3.14 ;
    float perimeter;
    float productDimensions ;
    perimeter = (firstDimension + secondDimension + thirdDimension) / 2.0 ;
    productDimensions = (firstDimension * secondDimension * thirdDimension) / (4 * sqrt(perimeter * (perimeter - firstDimension) * (perimeter - secondDimension) * (perimeter - thirdDimension)) ) ;
    return Pi * productDimensions ;
}

int main()
{
    unsigned short firstDimension ;
    unsigned short secondDimension ;
    unsigned short thirdDimension ;
    float Area ;

    cout << "Enter the first dimension: \n" ;
    cin >> firstDimension ;
    cout << "Enter the second dimension: \n" ;
    cin >> secondDimension ;
    cout << "Enter the third dimension: \n" ;
    cin >> thirdDimension ;

    Area = funcCalcArea(firstDimension, secondDimension, thirdDimension) ;
    cout << "Area equals to: " << Area << endl ;
    cout << "The round of area equals to: " << round(Area) ;

    return 0;
}
