#include <iostream>

using namespace std;

int main()
{

    short int length;
    short int width;
    short int area;

    cout << "Enter the length: \n" ;
    cin >> length;
    cout << "Enter the width: \n" ;
    cin >> width ;
    area = length * width ;
    cout << "The rectangle area equals to:  " << area ;
    return 0;
}
