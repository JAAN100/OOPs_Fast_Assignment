#include <iostream>
#include <cmath>
using namespace std;

//Calculating area of triaangle
double cal_Area(const double p ,const double AB ,const double BC ,const double AC)
{
	double area = sqrt(p * (p - AB) * (p - BC) * (p - AC));
	return area;
}

//Calculating Semi_peremeter
double semi_peremeter( const double AB ,const double BC ,const double AC)
{
	double p = (AB + BC + AC) / 2;
	return p;
}

//Calculating Distance
double disOfSides(double x1 ,double x2 ,double y1 , double y2 )
{
	double dis = 0;
	double X = x2 - x1;
	double Y = y2 - y1;
	dis = sqrt(pow(X, 2) + pow(Y, 2));
	return dis;
}

//Taking Input of the points
void inputPoints(double & x1, double & x2, double & x3, double &  y1, double & y2, double & y3)
{
	cout << "Enter the 'A' point x1 = ";
	cin >> x1;
	cout << "Enter the 'A' point y1 = ";
	cin >> y1;
	cout << "Enter the 'B' point x2 = ";
	cin >> x2;
	cout << "Enter the 'B' point y2 = ";
	cin >> y2;
	cout << "Enter the 'C' point x3 = ";
	cin >> x3;
	cout << "Enter the 'C' point y3 = ";
	cin >> y3;

}
int main()
{
	double x1, x2, x3, y1, y2, y3;

	//Input the points 
	inputPoints(x1, x2, x3, y1, y2, y3);

	//Calculating Distance
	double AB = disOfSides(x1, x2, y1, y2);
	double BC = disOfSides(x2, x3, y2, y3);
	double AC = disOfSides(x1, x3, y1, y3);

	//Calculate semi_peremeter
	double p = semi_peremeter(AB, BC, AC);

	//Calculating area of triangle
	double area = cal_Area(p, AB, BC, AC);

	cout << "The semi_peremeter 'p' is = " << p << endl;
	cout << "The total area of the triangle 'A' is = " << area << endl;
	return 0;
}