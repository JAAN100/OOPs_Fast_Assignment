#include <iostream>
#include <cmath>
using namespace std;
void displayArea(double A ,const double h, const double b1, const double b2 )
{
	A = (b1 + b2) * (h / 2);
	cout << "The area of the given Trapezoid 'A' is = " << A << " square units " << endl;
}
int main()
{
	double b1, b2;
	double h ;
	double A = 0;
	cout << "Enter the 'b1' side or base of the Trapezoid : ";
	cin >> b1;
	cout << "Enter the 'b2' side or base of the Trapezoid : ";
	cin >> b2;
	cout << "Enter the 'h' height of the Trapezoid : ";
	cin >> h;
	displayArea(A, h, b1, b2);
	return 0;
}