#include <iostream>

using namespace std;

struct strInfoOperation
{
    int FirstNumber;
    int secondNumber;
    string OperatioType;
};
void readInfoOperation(strInfoOperation &InfoOperartion)
{
    cout << "Enter Ther first number: \n";
    cin >> InfoOperartion.FirstNumber;
    cout << "Enter the second number: \n";
    cin >> InfoOperartion.secondNumber;
    cout << "Enter the operation type (+ - * /) :\n";
    cin >> InfoOperartion.OperatioType;
}
float excuteOperation(strInfoOperation InfoOperartion) {
    float Result;

    if (InfoOperartion.secondNumber == 0 && InfoOperartion.OperatioType == "/")
    {
        cout << "Can't devide by 0";
    }
    else
    {
        if (InfoOperartion.OperatioType == "+")
        {
            Result = InfoOperartion.FirstNumber + InfoOperartion.secondNumber;
        }
        else if (InfoOperartion.OperatioType == "-") 
        {
            Result = InfoOperartion.FirstNumber - InfoOperartion.secondNumber;
        }
        else if (InfoOperartion.OperatioType == "*")
        {
            Result = InfoOperartion.FirstNumber * InfoOperartion.secondNumber;
        }
        else if (InfoOperartion.OperatioType == "/")
        {
            Result = InfoOperartion.FirstNumber / InfoOperartion.secondNumber;
        }
        else
        {
            cout << "Please enter a valid operation \n";
        } 
    }
    return Result;
}

int main()
{
    strInfoOperation InfoOperartion;
    float Result;

    readInfoOperation(InfoOperartion);
    Result = excuteOperation(InfoOperartion);
    cout << InfoOperartion.FirstNumber << " " << InfoOperartion.OperatioType << " " << InfoOperartion.secondNumber << " = " << Result;
}
