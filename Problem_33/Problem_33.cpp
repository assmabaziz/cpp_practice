
#include <iostream>
using namespace std;

short readGrade()
{ 
    short Grade;
    cout << "Enter your grade:  \n";
    cin >> Grade;
    return Grade;
}
void definedGrade(short Grade)
{
    
    if (Grade >= 90)
    {
        cout << "Grade A";
    }
    else if (Grade >= 80)
    {
        cout << "Grade B";
    }
    else if (Grade >= 70)
    {
        cout << "Grade C";
    }
    else if (Grade >= 60)
    {
        cout << "Grade D";
    }
    else if (Grade >= 50)
    {
        cout << "Grade E";
    }
    else
    {
        cout << "Grade F";
    }
}
int main()
{
   
    definedGrade(readGrade());
    return 0;
}

