#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
using namespace std;
class MyBooks 
{
private:
	string bookTitle;
	string authorName;
	int COB;
public:
//*******************************************
//      Default Constructor Of Books
//*******************************************
	MyBooks();
//*******************************************
//      Copy Constructor Of Books
//*******************************************
	MyBooks(const MyBooks&);
//*******************************************
//      Assignment Operator Of Books
//*******************************************
	const MyBooks& operator=(const MyBooks&);
//*******************************************
//      Set Of Books
//*******************************************
	void setMyBooks(string, string ,int);
//*******************************************
//      Set Count Of Books
//*******************************************
	void setBooksCount(int);
//*******************************************
//      Get Of Books
//*******************************************
	string getBooksTitle()const;
//*******************************************
//      Get Of Books
//*******************************************
	string getBooksAuthor()const;
//*******************************************
//      Get Count Of Books
//*******************************************
	int getBooksCount()const;
//*******************************************
//      Display All Books
//*******************************************
	void displatBooks()const;
//*******************************************
//      Destructor Of Books
//*******************************************
	~MyBooks();
};
#endif // !BOOKS_H
