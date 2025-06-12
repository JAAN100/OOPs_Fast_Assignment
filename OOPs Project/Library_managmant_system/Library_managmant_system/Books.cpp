#include <iostream>
#include "Books.h"
using namespace std;
//***********************************************
//     Defination Default Constructor Of Books
//***********************************************
MyBooks::MyBooks() 
{
    bookTitle = "";
    authorName = "";
    COB = 0;
}
//*******************************************
//      Copy Constructor Of Books
//*******************************************
MyBooks::MyBooks(const MyBooks& orig)
{
    authorName = orig.authorName;
    bookTitle = orig.bookTitle;
    COB = orig.COB;
}
//*******************************************
//      Assignment Operator Of Books
//*******************************************
const MyBooks& MyBooks::operator=(const MyBooks& rhs)
{
    if (this != &rhs)
    {
        authorName = rhs.authorName;
        bookTitle = rhs.bookTitle;
        COB = rhs.COB;
    }
    return *this;
}
//*******************************************
//      Set Of Books
//*******************************************
void MyBooks:: setMyBooks(string BT, string AN,  int CoB)
{
    COB = CoB;
    bookTitle = BT;
    authorName = AN;
}
//*******************************************
//      Set Count Of Books
//*******************************************
void MyBooks::setBooksCount(int CoB)
{
    COB = CoB;
}
//*******************************************
//      Get Of Books
//*******************************************
string MyBooks:: getBooksTitle()const
{
    return bookTitle;
}
//*******************************************
//      Get Of Author NAme
//*******************************************
string MyBooks:: getBooksAuthor()const
{
    return authorName;
}

//*******************************************
//      Get Count Of Books
//*******************************************
int MyBooks::getBooksCount()const
{
    return COB;
}

//*******************************************
//      Display All Books
//*******************************************
void MyBooks:: displatBooks()const
{
    cout << bookTitle << "\t\t\t\t" << authorName ;
}
//*******************************************
//      Defination Destructor Of MyBooks
//*******************************************
MyBooks::~MyBooks() 
{
}
