#include <iostream>

using namespace std;

int main()
{

    const float Pi = 3.14 ;
    short int diameter ;
    float area ;

    cout << "Enter the diameter: \n" ;
    cin >> diameter ;
    area = (Pi * diameter * diameter) / 4 ;

    cout << "The circle's area equals to: " << area ;


    return 0;
}
