#include <iostream>

using namespace std;

int main()
{

    short int diameter ;
    const float Pi = 3.14 ;
    float area ;

    cout << "Enter the diameter: \n" ;
    cin >> diameter ;
    area = (Pi * diameter * diameter ) / 4 ;
    cout << "The circle area equals to: " << area << endl ;


    return 0;
}
