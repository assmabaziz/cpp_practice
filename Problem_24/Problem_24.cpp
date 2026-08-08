#include <iostream>

using namespace std;

int main()
{
  
	short Age;
	cout << "Enter your age: \n";
	cin >> Age;
	if (Age >= 18 && Age < 45)
	{
		cout << "Valid age";
	}
	else
	{
		cout << "Unvalid age";
	}

   return 0;
}

