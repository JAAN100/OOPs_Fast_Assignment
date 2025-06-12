#ifndef LIBRARY_H
#define LIBRARY_H
#include<iostream>
#include "Books.h"
using namespace std;
class Library 
{
protected:
	string libraries;
	int COL;
	int COB;
	MyBooks* bookdetails;
public:
//*******************************************
//      Default Constructor Of Library
//*******************************************
	Library();
//*******************************************
//      Overloading Constructor Of Library
//*******************************************
	Library(string , int);
//*******************************************
//      Copy Constructor Of Library
//*******************************************
	Library(const Library&);
//*******************************************
//      Assignment operator= Of Library
//*******************************************
	const Library& operator=(const Library&);
//*******************************************
//      InitialSet Of Library 
//*******************************************
	void initialSetLibraries(string);
//*******************************************
//     Get Count Of Library
//*******************************************
	void setCOL(int);
//*******************************************
//     Get Count Of Library
//*******************************************
	int getCOL() const;
//*******************************************
//     Get Name Of Library
//*******************************************
	string getNOL() const;
//*******************************************
//       Display Of Library
//*******************************************
	void display();
//******************************************
//       Display Of All Books
//*******************************************
	void displayBooks() const;
//*******************************************
//       Display Of Count Books
//*******************************************
	int getCountBooks() const;
//*******************************************
//      Set Books Details
//*******************************************
	void setBooksDetails(string*, string* , int);
//*******************************************
//      Get Books title
//*******************************************
	const string getBooksTitle(int) const;
//*******************************************
//      Get Books Author's Name
//*******************************************
	const string getBooksAuthor(int) const;
//*******************************************
//     Get For Copy Books Details
//*******************************************
	void getcopyBooksDetails(int&, int&);
//*******************************************
//    Copy Books Details
//*******************************************
	void copyBooksDetails(string, string);
//*******************************************
//       Get For Update Books Details
//*******************************************
	void getupdateBooksDetails();
//*******************************************
//      Update Books Details
//*******************************************
	void updateBooksDetails(int);
//*******************************************
//      Delete Books Details
//*******************************************
	void deleteBooksDetails(int);
//*******************************************
//      Display Books Details
//*******************************************
	void displayAllBooksDetails(const int) const;
//*******************************************
//      Destructor Of Library
//*******************************************
	~Library();
};
#endif // !1
