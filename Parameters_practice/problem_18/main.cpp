#include <iostream>
#include <cmath>

using namespace std;

float funcCalcArea(int radius)
{
    const float Pi = 3.14 ;

    return pow(radius, 2) * Pi ;
}

int main()
{
    int radius ;
    float Area ;

    cout << "Enter the radius: \n";
    cin >> radius ;
    Area = funcCalcArea(radius);
    cout << "Area equals to: " << Area << endl ;
    cout << "Ceil of area: " << ceil(Area) << endl;
    cout << "Ceil of area: " << ceil(funcCalcArea(radius)) ;

    return 0;
}
