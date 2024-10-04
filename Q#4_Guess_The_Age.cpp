#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int age;
	cout << "Enter your age \n";
	cin >> age;
	if (age <= 1)
	{
		cout << "You are a baby \n";
	}
	else if (age >=2 && age <= 3)
	{ 
		cout << "You are a Toddler \n";
	}
	else if (age >= 4 && age <=12)
	{
		cout << "You are a child \n";
	}
	else if (age >= 13 && age <= 19)
	{
		cout << "You are a Teenager \n";
	}
	else if (age >= 20 && age < 60)
	{
		cout << "You are a Adult \n";
	}
	else
	{
		cout << "You are an Old Codger\n";
	}
	return 0;
}
