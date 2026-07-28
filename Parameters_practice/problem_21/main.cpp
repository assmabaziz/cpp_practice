#include <iostream>
#include <cmath>

using namespace std;

float funcCalcArea(unsigned short diameter)
{
   const float Pi = 3.14 ;
   return  pow(diameter , 2 ) / ( Pi * 4 ) ;
}

int main()
{
    unsigned short diameter ;
    float Area ;

    cout << "Enter the diameter: \n";
    cin >> diameter ;
    Area = funcCalcArea(diameter) ;
    cout << "The circle area equals to: " << Area  << endl ;
    cout << "The floor of area equals to: " << floor(Area) ;

    return 0;
}
