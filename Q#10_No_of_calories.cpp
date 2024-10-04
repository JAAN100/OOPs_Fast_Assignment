#include <iostream>
using namespace std;
int main()
{
	float weight;
	int calories = 0;
	// Person's Activity factor
	int PA_factor = 0;
	char lifestyle;
	cout << "Enter your body weight : ";
	cin >> weight;
	cout << "Enter 'A' if you have an active lifestyle otherwise enter 'S' if you have a sedentary lifestyle : ";
	cin >> lifestyle;
	while (lifestyle != 'S' && lifestyle != 's' && lifestyle != 'A' && lifestyle != 'a')
	{
		cout << "Error ! invalid input \n";
		cout << "Enter 'A' if you have an active lifestyle otherwise enter 'S' if you have a sedentary lifestyle : ";
		cin >> lifestyle;
	}
	//Checking PA_FActor
	if ( lifestyle == 'A' ||  lifestyle == 'a')
	{
		PA_factor = 13;
	}
	else if ( lifestyle == 'S' || lifestyle == 's')
	{
		PA_factor = 15;
	}
	
	//Calories calculation
	calories = PA_factor * weight;
	cout << "The of calories younhave to in take daily is = " << calories << endl;
	return 0;
}