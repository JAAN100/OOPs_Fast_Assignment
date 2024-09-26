#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	double distance_travel;
	// Taking input distance covered by car in miles
	cout << "Enter the miles covered by your car \n";
	cin >> distance_travel;

	//Taking input fuel use by the car in gallons in 
	double fuel_in_gallons;
	cout << "Enter the number of gallons used after covering "<< distance_travel << " miles \n";
	cin >> fuel_in_gallons;
	
	// Error checked
	while (fuel_in_gallons <= 0 || distance_travel <=0 )
	{
		cout << "Error! the number of miles or fuel usage ypu entered is not correct \n";

		// Taking input distance covered by car in miles
		cout << "Enter the miles covered by your car \n";
		cin >> distance_travel;

		//Taking input fuel use by the car in gallons in 
		cout << "Enter the number of gallons used after covering " << distance_travel << " miles \n";
		cin >> fuel_in_gallons;
	}
	double mileage;
	
	//Milage calculate
	mileage = distance_travel / fuel_in_gallons;

	cout << "The mileage of your car  after covering " << distance_travel << " miles in " << fuel_in_gallons << " fuel is " << mileage << endl;

}