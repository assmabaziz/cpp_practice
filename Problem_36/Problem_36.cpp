#include <iostream>

using namespace std;

struct strInfoOperation
{
    int FirstNumber;
    int secondNumber;
    char OperationType;
};
void readInfoOperation(strInfoOperation &InfoOperartion)
{
    cout << "Enter Ther first number: \n";
    cin >> InfoOperartion.FirstNumber;
    cout << "Enter the second number: \n";
    cin >> InfoOperartion.secondNumber;
    cout << "Enter the operation type (+ - * /) :\n";
    cin >> InfoOperartion.OperationType;
}
float excuteOperation(strInfoOperation InfoOperartion) {
    float Result;

    if (InfoOperartion.secondNumber == 0 && InfoOperartion.OperationType == '/' )
    {
        cout << "Can't devide by 0";
    }
    else
    {
        switch (InfoOperartion.OperationType)
        {
            case '+' :
                Result = InfoOperartion.FirstNumber + InfoOperartion.secondNumber;
                break;

            case '-':
                Result = InfoOperartion.FirstNumber - InfoOperartion.secondNumber;
                break;

            case '*':
                Result = InfoOperartion.FirstNumber * InfoOperartion.secondNumber;
                break;

            case '/':
                Result = InfoOperartion.FirstNumber / InfoOperartion.secondNumber;
                break;
            default:
                cout << "Choose a valid operation";
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
    cout << InfoOperartion.FirstNumber << " " << InfoOperartion.OperationType << " " << InfoOperartion.secondNumber << " = " << Result;
}
