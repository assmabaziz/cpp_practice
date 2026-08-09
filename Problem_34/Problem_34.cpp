#include <iostream>

using namespace std;

 int readAmount()
{
    int Amount;
    cout << "Enter the amount: \n";
    cin >> Amount;
    return Amount;
}

float calculatePercentage(int Amount)
{
    float percentage;
    if (Amount >= 1000000)
    {
        percentage = 0.01;
    }
    else if (Amount >= 500000)
    {
        percentage = 0.02;
    }
    else if (Amount >= 100000)
    {
        percentage = 0.03;
    }
    else if (Amount >= 50000)
    {
        percentage = 0.05;
    }
    else
    {
        percentage = 0;
    }
    return percentage;
}

void calculateCommission()
{
    int Amount = readAmount();
    float Percentage = calculatePercentage(Amount);
    float Commission = Percentage * Amount; 
    cout << "The commision equals to: " << Commission;

}

int main()
{
    calculateCommission();

}
