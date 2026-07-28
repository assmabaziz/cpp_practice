#include <iostream>

using namespace std;

int funcCalcArea (short int length , short int width) {

    int Area = length * width ;\
    return Area ;

}

int main()
{

    short int length;
    short int width;
    int Area;

    cout << "Enter the length: \n" ;
    cin >> length;
    cout << "Enter the width: \n" ;
    cin >> width ;
    Area = funcCalcArea(length , width) ;

    cout << "The area equals to: " << Area ;

    return 0;
}
