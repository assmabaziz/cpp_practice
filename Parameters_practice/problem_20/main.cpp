#include <iostream>
#include<cmath>

using namespace std;

float funcCalcArea(int diameter)
{
  const float Pi = 3.14 ;
  return (Pi * pow(diameter , 2) ) / 4 ;
}

int main()
{

    int diameter ;
    float Area ;

    cout << "Enter the diameter: \n" ;
    cin >> diameter ;
    Area = funcCalcArea(diameter) ;
    cout << "The circle area equals to: " << Area << endl ;
    cout << "Ceil of the area equals to: " << ceil(Area) ;

    return 0;
}
