#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    short int diameter ;
    const float Pi = 3.14 ;
    float area ;

    cout << "Enter the diameter: \n" ;
    cin >> diameter ;
    area = (Pi * pow(diameter , 2) ) / 4 ;
    cout << "The circle area equals to: " << area << endl ;
    cout << "Ceil of the area equals to: " << ceil(area) ;

    return 0;
}
