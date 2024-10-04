#include <iostream>
#include <cmath> 
using namespace std;


// Check The date 
int day_Check(int month, int year)
{
	if (month == 2)
	{
		if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
		{
			return 29;
		}
		return 28;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		return 30;
	}
	else
	{
		return 31;
	}
}


//Increment for net date
int next_Date(int& day, int& month, int& year)
{
	day++;
	if (day > day_Check(month, year))
	{
		day = 1;
	}
	month++;
	if (month > 12)
	{
		month = 1;
		year++;
	}
	return 0;
}

int  main()
{
	int day, month, year;
	cout << "Enter the date (Day - Month - Year) \n";
	cin >> day >> month >> year;

	//Checking validity of thr date
	while (month < 1 || month > 12 || year < 1 || day > day_Check(month  , year))
	{
		cout << "Error ! Please Enter valid date :  \n";
		cout << "Enter the date (Day - Month - Year) \n";
		cin >> day >> month >> year;
	}
	 //Next date Increment 
	next_Date(day, month, year);
	cout << "The next date is : " << day << " - " << month << " - " << year << endl;
	return 0;
}