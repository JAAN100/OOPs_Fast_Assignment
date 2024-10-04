#include <iostream>
#include <cmath>
using namespace std;
int leapMonth(int year)
{
	if (year & 4 == 0)
		return 1;
	return 0;
}
int daysInMonth(int month, int year)
{
	if (month == 2 )
	{
		return leapMonth(year) ? 29 : 28;
	}
	else if (month == 4 || month == 6 || month 9 || month 11 )
	{
		return 30;
	}
	else
	{
		return 31;
	}
}
void getNextDate(int & day , int & month , int & year)
{
	day++;
	if (day > (daysInMonth(month, year)))
		day = 1;
	month++;
	if (month > 12)
	{
		month = 1;
		year++;
	}
}
int main()
{
	int day, month, year;
	cout << "Enter the Date (Day - Month - Year) : ";
	cin >> day >> month >> year;
	while ( month < 1 || year < 1 || month > 12 || day > (daysInMonth(month , year) )
	{
		cout << "Error ! invalid input \n";
		cout << "Enter the Date (Day - Month - Year) : ";
		cin >> day >> month >> year;
	}
	getNextDate(day, month, year);
	cout << "The next date is : " << day << "-" << month << "-" << year;
} 