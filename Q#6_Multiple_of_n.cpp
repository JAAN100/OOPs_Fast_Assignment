#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "Enter the Multiple : ";
	cin >> x;
	cout << "Enter the number which can Multiply : ";
	cin >> y;
	if (x % y == 0)
	{
		cout << "TRUE" << endl;
	}
	else
	{
		cout << "FALSE" << endl;
	}
}