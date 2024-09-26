#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int atoi_extra_telephoneService(char* Extra_telephone_service)
{

	cout << "Enter the hotel Extra telephone service charges : ";
	cin >> Extra_telephone_service;
	while (Extra_telephone_service == nullptr || *Extra_telephone_service == '\0')
	{
		cout << "Error !";
		cout << "PLease enter the valid Extra Charges charges : ";
		cin >> Extra_telephone_service;
	}

	while (*Extra_telephone_service == '$' || isspace(*Extra_telephone_service))
	{
		*Extra_telephone_service++;
	}
	return atoi(Extra_telephone_service);

}
int atoi_extra_roomService(char* Extra_room_service)
{

	cout << "Enter the hotel Extra Room service charges : ";
	cin >> Extra_room_service;
	while (Extra_room_service == nullptr || *Extra_room_service == '\0')
	{
		cout << "Error !";
		cout << "PLease enter the valid Extra Charges charges : ";
		cin >> Extra_room_service;
	}

	while (*Extra_room_service == '$' || isspace(*Extra_room_service))
	{
		*Extra_room_service++;
	}
	return atoi(Extra_room_service);

}
int atoi_teelephone_service(char* telephone_service)
{
	cout << "Enter the hotel Telephone service charges : ";
	cin >> telephone_service;
	while (telephone_service == nullptr || *telephone_service == '\0')
	{
		cout << "Error !";
		cout << "PLease enter the valid Per_Night charges : ";
		cin >> telephone_service;
	}

	while (*telephone_service == '$' || isspace(*telephone_service))
	{
		*telephone_service++;
	}
	return atoi(telephone_service);

}
int atoi_room_service(char* room_service)
{
	cout << "Enter the hotel Room service charges : ";
	cin >> room_service;
	while (room_service == nullptr || *room_service == '\0')
	{
		cout << "Error !";
		cout << "PLease enter the valid Per_Night charges : ";
		cin >> room_service;
	}

	while (*room_service == '$' || isspace(*room_service))
	{
		*room_service++;
	}
	return atoi(room_service);

}
int atoi_per_night(char* per_night)
{
	cout << "Enter the Per_Night charges : ";
	cin >> per_night;
	while(per_night == nullptr || *per_night == '\0')
	{
		cout << "Error !";
		cout << "PLease enter the valid Per_Night charges : ";
		cin >> per_night;
	}

	while (*per_night == '$' || isspace(*per_night))
	{
		*per_night++;
	}
	return atoi(per_night);
}
int main()
{
	int Extra_telephone_service = 0;
	int Extra_room_service = 0;
	char room_Service[10], telephone_Service[10];
	char permission_room_service, permission_telephone_service;
	char extra_room_service[10], extra_telephone_service[10];
	double total_bill = 0;
	int room_service = 0, telephone_service = 0;
	double stay_bills = 0;
	char per_night[10];
	//Per night Room bill add 
	int Per_night = atoi_per_night(per_night);
	double days_stay = 0;
	cout << "How many days guest stay : ";
	cin >> days_stay;
	stay_bills = days_stay * Per_night;

	//Room service 
	room_service = atoi_room_service(room_Service);

	//Telephone service
	telephone_service = atoi_teelephone_service(telephone_Service);

	// Total bill without Extra room service and telephone charges
	total_bill = stay_bills + room_service + telephone_service;

	//Check weather user have some extra charges
	cout << "If guest use any extra Room service ( Enter 'Y' ) Otherwise ( Enter 'N') " << endl;
	cin >> permission_room_service;
	//Conndition to check Weather the input is corrcct
	while (permission_room_service != 'y' && permission_room_service != 'Y' && permission_room_service != 'n' && permission_room_service != 'N')
	{
		cout << "Error ! Please enter valid permission \n";
		cout << "If guest use any extra Room service ( Enter 'Y' ) Otherwise ( Enter 'N') " << endl;
		cin >> permission_room_service;

	}

	cout << "If guest use any extra Telephone service ( Enter 'Y' ) Otherwise ( Enter 'N') " << endl;
	cin >> permission_telephone_service;

	while (permission_telephone_service != 'y' && permission_telephone_service != 'Y' && permission_telephone_service != 'n' && permission_telephone_service != 'N')
	{
		cout << "Error ! Please enter valid permission \n";
		cout << "If guest use any extra Telephone service ( Enter 'Y' ) Otherwise ( Enter 'N') " << endl;
		cin >> permission_telephone_service;
	}

	// Calculating Extra room charges
	if (permission_room_service == 'y' || permission_room_service == 'Y')
	{
	    Extra_room_service =  atoi_extra_roomService(extra_room_service);
		int service_used = 0;
		cout << "How many times service was used by guest \n";
		cin >> service_used;
		Extra_room_service = service_used * Extra_room_service;
		total_bill = total_bill + Extra_room_service;
	}
	if (permission_telephone_service == 'y' || permission_telephone_service == 'Y')
	{
		 Extra_telephone_service = atoi_extra_telephoneService(extra_telephone_service);
		int service_used = 0;
		cout << "How many times service was used by guest \n";
		cin >> service_used;
		Extra_telephone_service = service_used * Extra_telephone_service;
		total_bill = total_bill + Extra_telephone_service;
	}


	// Ouptput part
	cout << "You have stayyed  " << days_stay <<"." << endl;
	cout << "Per night cost of our hotel is $" << Per_night <<"." << endl;
	cout << "Hotel Stay charges $" << stay_bills <<"." << endl;
	cout << "The Room service you have to pay $" << room_service <<"." << endl;
	cout << "The Telephone service you have to pay $" << telephone_service <<"." << endl;
	cout << "The extra Room service charge in case of use $" << Extra_room_service <<"." << endl;
	cout << "The extra Telephone service charge in case of use $" << Extra_telephone_service <<"." << endl;
	cout << "The total bill you have to pay is $" << total_bill <<"." << endl;
}