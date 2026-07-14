#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float Pi = 3.14 ;
    short int diameter ;
    float area ;

    cout << "Enter the diameter: \n";
    cin >> diameter ;
    area = (diameter * diameter) / ( Pi * 4 ) ;
    cout << "The circle area equals to: " << area  << endl ;
    cout << "The floor of area equals to: " << floor(area) ;

    return 0;
}
