#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    short baseNumber ;
    short powerNumber ;
    unsigned int result ;

    cout << "Please enter the base:  \n" ;
    cin >> baseNumber ;
    cout << "Please enter the power: \n" ;
    cin >> powerNumber ;
    result = pow(baseNumber , powerNumber) ;
    cout << "The number: " << baseNumber << " to power: " << powerNumber << " equals to: " << result << endl ;

    return 0;
}
