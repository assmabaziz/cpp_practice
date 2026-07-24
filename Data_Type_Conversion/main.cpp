#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Str1 = "44.995555" ;
    int NumInteger = 20 ;
    double NumDouble = 33.5 ;
    float NumFloat = 55.23 ;
    double StrToDouble = stod(Str1) ;
    float StrToFloat = stof(Str1) ;
    int StrToInteger = stoi(Str1) ;
    string IntegerToString = to_string(NumInteger) ;
    string DoubleToString = to_string(NumDouble) ;
    string FloatToString = to_string(NumFloat) ;
    int ImplFloatToInt = NumFloat ;
    int ExpFloatToIntCStyle = (int)NumFloat ;
    int ExpFloatToIntFunc = int(NumFloat) ;

    cout << "String to double: " << StrToDouble  << "\n";
    cout << "String to float: " << StrToFloat << "\n" ;
    cout << "String to integer: " << StrToInteger << "\n" ;
    cout << "Integer to string: " << IntegerToString << "\n" ;
    cout << "Double to string: " << DoubleToString << "\n" ;
    cout << "Float to string: " << FloatToString << "\n" ;
    cout << "Implicit conversion float to integer: " << ImplFloatToInt << "\n" ;
    cout << "Explicit conversion type C to integer: " << ExpFloatToIntCStyle << "\n" ;
    cout << "Explicit conversion to integer using function: " << ExpFloatToIntFunc << endl ;














    return 0;
}
