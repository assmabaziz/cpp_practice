#include <iostream>

using namespace std;

short Age;

void readAge(short& Age)
{
	cout << "Enter your age: \n";
	cin >> Age;
}
void checkAge(short Age)
{
	if (Age >= 18 && Age < 45)
	{
		cout << "Valid age";
	}
	else
	{
		cout << "Unvalid age";
	}
}

int main()
{
	short Age;
	readAge(Age);
	checkAge(Age);

   return 0;
}

