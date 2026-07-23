#include <iostream>

using namespace std;

struct stTest
{
    string text;
    bool IsAvailable ;
};
struct StOwner
{
    string FullName ;
    string Phone ;
    stTest test ;
};

struct StCar
{
    string Brand ;
    string Model ;
    int Year ;
    StOwner owner ;
};

struct StPerson
{
    string Name ;
    int Age ;
    string City ;
    string Country ;
    int MonthlySalary ;
    int YearlySalary ;
    string Gender ;
    bool IsMarried ;

};

enum Color
{
    red, blue, green, yellow
};

int main()
{

    StCar MyFirstCar , MySecondCar ;
    StPerson FirstPerson ;
    Color MyColor;
    MyColor = Color::blue ;

    MyFirstCar.Brand = "BMW" ;
    MyFirstCar.Model = "XS" ;
    MyFirstCar.Year = 2012 ;
    MyFirstCar.owner.FullName = "Assma";
    MyFirstCar.owner.Phone = "+79779197013" ;

    MySecondCar.Brand = "Toyota" ;
    MySecondCar.Model = "Yariss" ;
    MySecondCar.Year = 2020 ;
    MySecondCar.owner.FullName = "Asma";
    MySecondCar.owner.Phone = "+2135555555" ;
    //MyFirstCar.owner.test.text ;
    //cin >>  MyFirstCar.owner.test.text ;
    FirstPerson.Name ;
    FirstPerson.Age ;
    FirstPerson.City ;
    FirstPerson.Country ;
    FirstPerson.MonthlySalary ;
    FirstPerson.Gender ;
    FirstPerson.IsMarried ;
    cout << "What's your name: \n" ;
    cin >> FirstPerson.Name ;
    cout << "Your name is: " << FirstPerson.Name << endl ;


    cout << "Brand first car: " << MyFirstCar.Brand << "\n" ;
    cout << "Model first car: " << MyFirstCar.Model << "\n" ;
    cout << "Year first car: " << MyFirstCar.Year << "\n"  ;
    cout << "Full name owner first car: " << MyFirstCar.owner.FullName << "\n"  ;
    cout << "Phone number owner first car: " << MyFirstCar.owner.Phone << "\n"  ;
    cout << "Test: " << MyFirstCar.owner.test.text << "\n \n" ;

    cout << "Brand second car: " << MySecondCar.Brand << "\n" ;
    cout << "Model second car: " << MySecondCar.Model << "\n" ;
    cout << "Year second car: " << MySecondCar.Year << "\n" ;
    cout << "Full name owner second car: " << MySecondCar.owner.FullName << "\n"  ;
    cout << "Phone number owner second car: " << MySecondCar.owner.Phone << "\n" ;
    cout << "Enum: " << MyColor << endl;

    return 0;
}
