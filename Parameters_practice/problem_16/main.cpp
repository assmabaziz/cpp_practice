#include <iostream>
#include <cmath>

using namespace std;

float funcCalcArea(int width , int diameter)
{
    return width * sqrt(pow(diameter,2) - pow(width , 2)) ;

}


int main()
{

    int width ;
    int diameter ;
    float Area ;

    cout << "Enter the width:  \n" ;
    cin >> width ;
    cout << "Enter the diameter: \n" ;
    cin >> diameter ;
    Area = funcCalcArea(width , diameter) ;
    cout << Area ;

    return 0;
}
