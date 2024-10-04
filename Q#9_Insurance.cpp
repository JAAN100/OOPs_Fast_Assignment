#include <iostream>
using namespace std;
int main()
{
	int basic_insure = 500;
	int age ,accident;
	cout << "Enter your age : ";
	cin >> age;
	if (age < 25)
	{
		basic_insure += 100;
	}
	cout << "Enter the no of accident the rider make : ";
	cin >> accident;
	switch (accident)
	{
	case  1:
		basic_insure += 50;
		cout << "The cost of your auto_mobile premium insurance is : " << basic_insure << " Rs" << endl;
		break;

	case  2:
		basic_insure += 125;
		cout << "The cost of your auto_mobile premium insurance is : " << basic_insure << " Rs" << endl;
		break;
	case  3:
		basic_insure += 225;
		cout << "The cost of your auto_mobile premium insurance is : " << basic_insure << " Rs" << endl;
		break;
	case  4:
		basic_insure += 375;
		cout << "The cost of your auto_mobile premium insurance is : " << basic_insure << " Rs" << endl;
		break;
	case  5:
		basic_insure += 575;
		cout << "The cost of your auto_mobile premium insurance is : " << basic_insure << " Rs" << endl;
		break;
	default:
		cout << "We are unable to offer you an insurance because your no of accident is excede from our policy. " << endl;
		break;
	}
}