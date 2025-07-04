#include <iostream>
#include "Books.h"
using namespace std;
Books::Books()
{
	book_Title = " ";
	author_Name = " ";
}
Books::Books(string title, string name , int count)
{
	book_Title = title;
	author_Name = name;
}
Books::Books(const Books& orig)
{
	book_Title = orig.book_Title;
	author_Name = orig.author_Name;
}
const Books& Books:: operator=(const Books& rhs)
{
	book_Title = rhs.book_Title;
	author_Name = rhs.author_Name;
	return *this;
}
void Books::setBooksTitle(string title)
{
	book_Title = title;
}
void Books::setAuthorName(string name)
{
	author_Name = name;
}
void Books::displayBooks() const
{
	cout << "\t\t\tBook title : " << book_Title << endl;
	cout << "\t\t\tAuthor name : " << author_Name << endl;
}
Books::~Books()
{ }