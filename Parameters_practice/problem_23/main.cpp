#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float Pi = 3.14 ;
    short firstDimension ;
    short secondDimension ;
    short thirdDimension ;
    float perimeter;
    float productDimensions ;
    float area ;

    cout << "Enter the first dimension: \n" ;
    cin >> firstDimension ;
    cout << "Enter the second dimension: \n" ;
    cin >> secondDimension ;
    cout << "Enter the third dimension: \n" ;
    cin >> thirdDimension ;

    perimeter = (firstDimension + secondDimension + thirdDimension) / 2.0 ;
    productDimensions = (firstDimension * secondDimension * thirdDimension) / (4 * sqrt(perimeter * (perimeter - firstDimension) * (perimeter - secondDimension) * (perimeter - thirdDimension)) ) ;
    productDimensions = pow(productDimensions , 2);
    area = Pi * productDimensions ;
    cout << "Area equals to: " << area << endl ;
    cout << "The round of area equals to: " << round(area) ;

    return 0;
}
