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
    area = pow(radius, 2) * Pi ;
    cout << "Area equals to: " << area << endl ;




    return 0;
}
