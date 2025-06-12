#include <iostream>
#include "Administrative_DEP.h"
using namespace std;
int Administration::libNum = 0;
string Administration::libName = "";
void Administration::deleteNameDetails()
{
	libName = "";
	libNum = 0;
}
Administration::Administration()
{
	AdminLibrary = nullptr;
	libName = "";
	libNum = 0;
}
Administration::Administration (string a)
{
	AdminLibrary = nullptr;
	libName = a;
	libNum = 0;
}
void Administration::setAdminLibraryDetails(Library * L, int N)
{
	if (AdminLibrary != nullptr)
	{
		delete[] AdminLibrary;
		AdminLibrary = nullptr;
	}
	AdminLibrary = new Library[N];
	for (int i = 0; i < N; i++)
	{
		AdminLibrary[i] = L[i];
	}
	libNum = N;
}
void Administration::setAdminLibraryName(string NAME)
{
	libName = NAME;
}
void Administration::deleteAdminDetails()
{
	if (AdminLibrary != nullptr)
	{
		delete[] AdminLibrary;
		AdminLibrary = nullptr;
	}
	deleteNameDetails();
}
Administration::~Administration()
{
	if (AdminLibrary != nullptr)
	{
		delete[] AdminLibrary;
		AdminLibrary = nullptr;
	}
	libNum = 0;
	libName = "";
}