#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
#include <string>
using namespace std;
class Books
{
protected:
	string book_Title;
	string author_Name;
public:
	Books();
	Books(string, string,int);
	Books(const Books&);
	const Books& operator=(const Books&);
	void setBooksTitle(string);
	void setAuthorName(string);
	void displayBooks() const;
	~Books();
};
#endif // !1
