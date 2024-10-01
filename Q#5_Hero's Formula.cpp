#include <iostream>
#include <cmath>
using namespace std;
void displayArea(double A, const int p, const int a, const int b, const int c)
{
	A = sqrt(p * (p - a) * (p - b) * (p - c) );
	cout << "The total area of the given sides of the triangle A is = " << A << endl;
}
int main()
{
	int a, b, c;
	double p = 0;
	double A = 0;
	cout << "Enter the length if 'a' side of the triangle :";
	cin >> a;
	cout << "Enter the length if 'b' side of the triangle :";
	cin >> b;
	cout << "Enter the length if 'c' side of the triangle :";
	cin >> c;
	p = (a + b + c) / 2;
	cout << " The semi-perimeter of the given sides of a triangle is = " << p << endl;
	displayArea(A, p, a, b, c);
	return 0;

}