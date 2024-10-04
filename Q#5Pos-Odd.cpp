#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number \n";
	cin >> num;
	if (num > 0)
	{
		if (num % 2 == 0)
		{
			cout << "The number you enter is an even positive number \n" << endl;
		}
		else
		{
			cout << "The number you enter is an odd positive number \n" << endl;
		}
	}
	else
	{
		if (num % 2 == 0)
		{
			cout << "The number you enter is an even negative number \n" << endl;
		}
		else
		{
			cout << "The number you enter is an odd negative number \n" << endl;
		}
	}
}