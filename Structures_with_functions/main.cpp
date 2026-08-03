#include <iostream>

using namespace std;



struct strPersonInfo
{
    string Name ;
    short Age ;
    string City ;
    string Country ;
    short MonthlySalary ;
    short YearlySalary ;
    string Gender ;
    string MartialStatus ;

};

void procedureReadInfo (strPersonInfo &PersonInfo)
{
    cout << "please enter your name: " << "\n" ;
    cin >> PersonInfo.Name ;
    cout << "Please enter your age: " << "\n" ;
    cin >> PersonInfo.Age ;
    cout << "Please enter your city: " << "\n" ;
    cin >> PersonInfo.City ;
    cout << "Please enter your Monthly Salary: " << "\n" ;
    cin >> PersonInfo.MonthlySalary ;
    cout << "Please enter your gender: " << "\n" ;
    cin >> PersonInfo.Gender ;
    cout << "Please enter your martial status: " << "\n" ;
    cin >> PersonInfo.MartialStatus ;

}

void procedurePrintInfo (strPersonInfo PersonInfo)
{
    cout << "\n*******************************\n" ;
    cout << "Name: " << PersonInfo.Name << "\n" ;
    cout << "Age: " << PersonInfo.Age << "\n" ;
    cout << "City: " << PersonInfo.City << "\n" ;
    cout << "Monthly salary: " << PersonInfo.MonthlySalary << "\n" ;
    cout << "Yearly salary: " << PersonInfo.MonthlySalary * 12 << "\n" ;
    cout << "Gender: " << PersonInfo.Gender << "\n" ;
    cout << "Martial status: " << PersonInfo.MartialStatus << "\n";
    cout << "*******************************\n" ;
}


int main()
{
    strPersonInfo Person1 ;
    procedureReadInfo(Person1) ;
    procedurePrintInfo(Person1) ;


    return 0;
}
