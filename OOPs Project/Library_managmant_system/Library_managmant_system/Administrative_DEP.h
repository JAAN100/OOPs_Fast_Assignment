#ifndef ADMINISTRATIVE_DEP_H
#define ADMINISTRATIVE_DEP_H
#include <iostream>
#include "LIBRARY.h"
using namespace std;
class Administration : public Library
{
private:
	Library* AdminLibrary;
	static int libNum;
	static string libName;
	static void deleteNameDetails();
public:
//*************************************************
//      Default Constructor Of AdminDepartment
//*************************************************
	Administration();
//*************************************************
//      Overloaded Constructor Of AdminDepartment
//*************************************************
	Administration(string = "");

//*************************************************
//      Copy Constructor Of AdminDepartment
//*************************************************
	Administration(const Administration&);
//*************************************************
//      Assignment Operator Of AdminDepartment
//*************************************************
	const Administration& operator=(const Administration&);
//*************************************************
//     Set Details Of AdminDepartment
//*************************************************	
	void setAdminLibraryDetails(Library* , int);
	static void setAdminLibraryName(string);
	void deleteAdminDetails();
	~Administration();
};
#endif // !ADMINISTRATIVE_DEP_H
