#include <iostream>

using namespace std;

short ReadCounter()
{
	short Counter;
	cout << "Enter the counter: \n";
	cin >> Counter;
	return Counter;
}

void PrintNumbers(short Counter)
{
	for (short i = Counter ; i >= 0; i--)
	{
		cout << i << endl;
	}
}

int main()
{
	PrintNumbers(ReadCounter());
}

