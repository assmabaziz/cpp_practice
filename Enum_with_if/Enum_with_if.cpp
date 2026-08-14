#include <iostream>

using namespace std;

enum enSystemColor {Red = 1, Blue = 2, Green = 3, Yellow = 4};

short readSystemColor()
{
	short SystemColor;
	cout << "Choose the system's color: \n";
	cout << " 1: Red \n";
	cout << " 2: Blue \n";
	cout << " 3: Green \n";
	cout << " 4: Yellow \n";
	cin >> SystemColor;
	return SystemColor;
}
void changeSystemColor(short SystemColor)
{
	enSystemColor Color;
	Color = (enSystemColor)SystemColor;
	if (Color == enSystemColor::Red)
	{
		system("Color 4F");
	}
	else if (Color == enSystemColor::Blue)
	{
		system("Color 1F");
	}
	else if (Color == enSystemColor::Green)
	{
		system("Color 2F");
	}
	else if (Color == enSystemColor::Yellow)
	{
		system("Color 6F");
	}
	else 
	{
		system("Color 1F");
	}
}

int main()
{
	changeSystemColor(readSystemColor());
}
