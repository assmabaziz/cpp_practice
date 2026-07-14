#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned short int radius ;
    const float Pi = 3.14 ;
    float area ;

    cout << "Enter the radius: \n";
    cin >> radius ;
    area = (pow(radius, 2) * Pi) / 4 ;
    cout << "Area equals to: " << area << endl ;
    cout << "Ceil of area: " << ceil(area) ;

    return 0;
}
