#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x , k = 0;
	cout << "Enter the value of x = ";
	cin >> x;
	while ( x < 0)
	{
		cout << "Error ! invalid input ";
		cout << "Enter the value of x = ";
		cin >> x;
	
	}
	double log = (x - 1) / x;
	for (int i = 1; i <= 7 ; i++)
	{
		k = (1.0 / 2.0) * pow( log , i);
	}
	cout << "The natura log of " << x << " is = " << log;
}
