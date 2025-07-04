#ifndef COLLECTION_OF_BOOKS_H
#define COLLECTION_OF_BOOKS_H
#include <iostream>
#include "Books.h">
#include "Library.h"
using namespace std;
class Collection_Of_Books
{
private:
	Books* book_details;
	Library* iD;
	static int count_Of_Books;
	void addBooksDetails(const Books);
	static void setCountOfBooks(const int);
public:
	Collection_Of_Books();
	Collection_Of_Books(Books* , Library* ,int , int);
	Collection_Of_Books(const Collection_Of_Books&);
	const Collection_Of_Books& operator=(const Collection_Of_Books&);
	static void displayCountOfBooks();
	void infoAddOfBooks();
	void deleteBookInfo(const int);
	void updateBookInfo(const int);
	void displayBooks()const;
	~Collection_Of_Books();
};
#endif // !COLLECTION_OF_BOOKS_H
