#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    unsigned short int width ;
    unsigned short int diameter ;
    float area ;

    cout << "Enter the height:  \n" ;
    cin >> width ;
    cout << "Enter the diameter: \n" ;
    cin >> diameter ;
    area = width * sqrt(pow(diameter,2) - pow(width , 2)) ;
    cout << area ;

    return 0;
}
