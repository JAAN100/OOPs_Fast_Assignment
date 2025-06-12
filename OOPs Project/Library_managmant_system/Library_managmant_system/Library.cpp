#include <iostream>
#include <fstream>
#include <string>
#include "Books.h"
#include "LIBRARY.h"
using namespace std;
//*****************************************************
//    Defination  Default Constructor Of Library
//*****************************************************
Library::Library()
{
	bookdetails = nullptr;
	libraries = "";
	COL = 0;
	COB = 0;
}
//***************************************************
//     Defination Overloaded Constructor Of Library
//***************************************************
Library::Library(string L, int C)
{
	bookdetails = nullptr;
	COB = 0;
	COL = C;
	libraries = L;
}
//*******************************************
//      Copy Constructor Of Library
//*******************************************
Library::Library(const Library& orig)
{
	COB = orig.COB;
	COL = orig.COL;
	libraries = orig.libraries;
	bookdetails = new MyBooks[COB];
	for (int i = 0; i < COB; i++)
	{
		bookdetails[i] = orig.bookdetails[i];
	}
}
//*******************************************
//      Assignment operator= Of Library
//*******************************************
const Library& Library:: operator=(const Library& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	else if (bookdetails != nullptr)
	{
		delete[] bookdetails;
		bookdetails = nullptr;
	}
	COB = rhs.COB;
	bookdetails = new MyBooks[COB];
	for (int i = 0; i < COB; i++)
	{
		bookdetails[i] = rhs.bookdetails[i];
	}
	libraries = rhs.libraries;
	COL = rhs.COL;
	return *this;
}
//*******************************************
//     Initial Set Of Library 
//*******************************************
void Library::initialSetLibraries(string LBD)
{
	libraries = LBD;
}
//*******************************************
//      Display Of Library
//*******************************************
void Library::display()
{
	cout << "\t\t\tYou are currently in " << libraries  << " Library." << endl;
	cout << "\t\t\tBooks:" << endl;
	if (bookdetails[0].getBooksCount() > 0)
	{
		cout << "\t\t\tThere are " << bookdetails[0].getBooksCount() << " books in our library." << endl;
		for (int i = 0; i < COB; i++)
		{
			cout << "\t\t\t";
			cout << bookdetails[i].getBooksTitle() << "\t\t\tBy\t\t" << bookdetails[i].getBooksAuthor() << endl;
		}
	}
	else
	{
		cout << "\t\t\tSorry we do not have any books in this library." << endl;
	}
	cout << "\n\n";
}
//*******************************************
//     Get Count Of Library
//*******************************************
void Library:: setCOL(int C)
{
	COL = C;
}
//*******************************************
//      Get Count Of Library
//*******************************************
int Library::getCOL() const
{
	return COL;
}
//*******************************************
//      Get Name Of Library
//*******************************************
string Library::getNOL() const
{
	return libraries;
}
//**********************************************
//       Display Of All Books Of a library
//**********************************************
void Library:: displayBooks() const
{
	if (COB > 0)
	{
		for (int i = 0; i < COB; i++)
		{
			cout << "\t\t\t\t"<< i + 1<< ". " << bookdetails[i].getBooksTitle() << "\t\t\tBy\t\t" << bookdetails[i].getBooksAuthor() << endl;
		}
	}
	else
	{
		cout << "\t\tSorry There is no Book in this library" << endl;
	}
}
//*******************************************
//       Display Of Count Books
//*******************************************
int Library:: getCountBooks() const
{
	return COB;
}
//*******************************************
//      Get Books title
//*******************************************
const string Library:: getBooksTitle(int num) const
{
	return bookdetails[num].getBooksTitle();
}
//*******************************************
//      Get Books Author
//*******************************************
const string Library::getBooksAuthor(int num) const
{
	return bookdetails[num].getBooksAuthor();
}
//*******************************************
//      Set Books Of Libraries
//*******************************************
void Library:: setBooksDetails(string* BD , string* AN, int CoB)
{
	COB = CoB;
	if (CoB > 0)
	{
		bookdetails = new MyBooks[CoB];
		for (int i = 0; i < CoB; i++)
		{
			bookdetails[i].setMyBooks(BD[i], AN[i], CoB);
		}
	}
	else if (CoB == 0)
	{
		bookdetails = new MyBooks[1];
		bookdetails[0].setMyBooks("", "", COB);
	}
}
//*******************************************
//     Get For Copy Books Details
//*******************************************
void Library:: getcopyBooksDetails(int& nBook, int& nLibrary)
{
	cout << "Currently there are " << getCountBooks() << " books : " << endl;
	displayBooks();
	cout << "Which Book Do you want to copy " << endl;
	cin >> nBook;
	cout << "In which Library Do you want to copy if you want to copy in all libraries enter any -ve number : ";
	cin >> nLibrary;

}
//*******************************************
//      Copy Books Details
//*******************************************
void Library:: copyBooksDetails(string title , string name)
{
	MyBooks* newBD = new MyBooks[COB + 1];
	for (int i = 0; i < COB; i++)
	{
		newBD[i] = bookdetails[i];
		newBD[i].setBooksCount(COB + 1);
	}
	newBD[COB].setMyBooks(title, name ,COB + 1);
	delete[] bookdetails;
	bookdetails = nullptr;
	bookdetails = newBD;
	COB += 1;
}
//*******************************************
//       Get For Update Books Details
//*******************************************
void Library:: getupdateBooksDetails()
{
	int num;
	cout << "Currently there are " << getCountBooks() << " books : " << endl;
	displayBooks();
	cout << "How many Books you want more or add : " << endl;
	cin >> num;
	if (num > 0)
	{
		updateBooksDetails(num);
	}
	else
	{
		cout << "Are you seriously wanna add fool?" << endl;
	}
}
//*******************************************
//      Update Books in Library
//*******************************************
void Library:: updateBooksDetails(int num)
{
	num += COB;
	string NBD , AN;
	cin.ignore();
	if (COB != 0)
	{
		MyBooks* newBD = new MyBooks[num]();
		for (int i = 0; i < COB; i++)
		{
			newBD[i] = bookdetails[i];
			newBD[i].setBooksCount(num);
		}
		delete[] bookdetails;
		bookdetails = nullptr;
		for (int i = COB; i < num; i++)
		{
			cout << "Add Book title " << i + 1 << " : " << endl;
			getline(cin, NBD);
			cout << "Add " << NBD << " Author's Name : " << endl;
			getline(cin, AN);
			newBD[i].setMyBooks(NBD, AN ,num);
		}
		bookdetails = newBD;
		COB = num;
		newBD = nullptr;
	}
	else
	{
		COB = num;
		delete[] bookdetails;
		bookdetails = nullptr;
		bookdetails = new MyBooks[num];
		for (int i = 0; i < num; i++)
		{
			cout << "Add Book title " << i + 1 << " : " << endl;
			getline(cin, NBD);
			cout << "Add " << NBD << " Author's Name : " << endl;
			getline(cin, AN);
			bookdetails[i].setMyBooks(NBD , AN, COB);
		}
	}
}

//*******************************************
//      Delete Books Details
//*******************************************
void Library :: deleteBooksDetails(int n)
{
	if (n > 0 && COB > 1)
	{
		MyBooks* DB = new MyBooks[COB]();
		for (int i = 0; i < COB; i++)
		{
			if (i != n - 1)
			{
				DB[i] = bookdetails[i];
			}
			else
			{
				DB[i] = MyBooks::MyBooks();
			}
		}
		delete[] bookdetails;
		bookdetails = nullptr;
		bookdetails = new MyBooks[n];
		for (int i = 0; i <= COB - 1; i++)
		{
			if (i >= n - 1)
			{
				bookdetails[i] = DB[i + 1];
			}
			else
			{
				bookdetails[i] = DB[i];
				
			}
			bookdetails[i].setBooksCount(COB - 1);
			COB -= 1;
		}
	}
	else if(bookdetails != nullptr || n < 0)
	{
		delete[] bookdetails;
		bookdetails = nullptr;
		COB = 0;
	}
}
//*******************************************
//      Display Books Details
//*******************************************
void Library:: displayAllBooksDetails(const int i) const
{
		cout << i + 1 << ". " << endl;
		if (getCountBooks() > 0)
		{
			for (int j = 0; j < getCountBooks(); j++)
			{
				bookdetails[j].displatBooks();
				cout << "\t\t\t\t" << getNOL() << endl;
			}
		}
		else
		{
			cout << "Soory we Do not have any books in \t\t\t\t\t " << getNOL() << endl;
		}
		cout << "\n\n";
	
}
//*******************************************
//      Destructor Of Library
//*******************************************
Library::~Library()
{
	if (bookdetails != nullptr)
	{
		delete[] bookdetails;
		bookdetails = nullptr;
	}
}