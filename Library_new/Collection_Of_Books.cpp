#include <iostream>
#include "Collection_Of_Books.h"
using namespace std;
int Collection_Of_Books::count_Of_Books = 0;
Collection_Of_Books::Collection_Of_Books()
{
	book_details = nullptr;
}
Collection_Of_Books::Collection_Of_Books(Books* p,Library* L, int n , int N)
{
	book_details = new Books[n];
	for (int i = 0; i < n; i++)
	{
		book_details[i] = p[i];
	}
	count_Of_Books += n;
	iD = new Library[N];
	for (int i = 0; i < N; i++)
	{
		iD[i] = L[i];
		iD->set_Count_Of_Libraries(1);
	}
}
Collection_Of_Books::Collection_Of_Books(const Collection_Of_Books& orig)
{
	book_details = new Books[count_Of_Books + 1];
	for (int i = 0; i < count_Of_Books; i++)
	{
		book_details[i] = orig.book_details[i];
	}
	setCountOfBooks(1);
}
const Collection_Of_Books& Collection_Of_Books:: operator=(const Collection_Of_Books& rhs)
{
	if (book_details != nullptr)
	{
		delete[] book_details;
		book_details = nullptr;
	}
	book_details = new Books[count_Of_Books + 1];
	for (int i = 0; i < count_Of_Books; i++)
	{
		book_details[i] = rhs.book_details[i];
	}
	setCountOfBooks(1);
	return *this;
}
void Collection_Of_Books::setCountOfBooks(const int count)
{
	count_Of_Books += count;
}

void Collection_Of_Books:: infoAddOfBooks()
{
	int n;
	cout << "How many Books do you want to add ? ";
	cin >> n;
	cin.ignore(1,'\0');
	for (int i = 0; i < n; i++)
	{
		Books b1;
		string s;
		cout << "Enter the book title : " << endl;
		getline(cin, s);
		b1.setBooksTitle(s);
		cout << "Enter the authors name of the book  : " << endl;
		s.empty();
		getline(cin, s);
		b1.setAuthorName(s);
		addBooksDetails(b1);
	}
}
void Collection_Of_Books::addBooksDetails(const Books book)
{
	setCountOfBooks(1);
	if (book_details != nullptr)
	{
		Books* p = new Books[count_Of_Books - 1];
		for (int i = 0; i < count_Of_Books - 1; i++)
		{
			p[i] = book_details[i];
		}
		delete[] book_details;
		book_details = nullptr;
		book_details = new Books[count_Of_Books];
		for (int i = 0; i < count_Of_Books; i++)
		{
			if (count_Of_Books - 1 == i)
			{
				book_details[i] = book;
			}
			else
			{
				book_details[i] = p[i];
			}
		}
		delete[] p;
		p = nullptr;
	}
	else
	{
		book_details = new Books[count_Of_Books];
		for (int i = 0; i < count_Of_Books; i++)
		{
			if (count_Of_Books - 1 == i)
			{
				book_details[i] = book;
			}
		}
	}
}
void Collection_Of_Books:: deleteBookInfo(const int num)
{
	if (count_Of_Books > 1)
	{
		Books* p = new Books[count_Of_Books]();
		for (int i = 0; i < count_Of_Books; i++)
		{
			if (i != num - 1)
			{
				p[i] = book_details[i];
			}
		}
		delete[] book_details;
		book_details = nullptr;
		book_details = new Books[count_Of_Books - 1];
		for (int i = 0; i < count_Of_Books; i++)
		{
			if (i < num - 1)
			{
				book_details[i] = p[i];
			}
			else if (i > num - 1)
			{
				book_details[i - 1] = p[i];
			}
		}
		setCountOfBooks(-1);
	}
	else if(count_Of_Books == 1)
	{
		delete[] book_details;
		book_details = nullptr;
		setCountOfBooks(-1);
	}
	else if (count_Of_Books == 0)
	{
		cout << "Error!" << endl;
		return;
	}
	cout << "Successfully Deleted the book " << num << endl;
	cout << "Now we have " << count_Of_Books << " books there." << endl;
}
void Collection_Of_Books::updateBookInfo(const int num)
{
	int check;
	cout << "Enter which detail you want to change (Title or Author name or both) / (1 , 2 , 3) : ";
	cin >> check;
	cin.ignore(1, '\0');
	if (count_Of_Books >= 1)
	{
		if (check  == 1)
		{
			string n;
			cout << "Enter the updated Title : " << endl;
			getline(cin, n);
			book_details[num - 1].setBooksTitle(n);
		}
		else if (check == 2)
		{
			string n;
			cout << "Enter the updated author name : " << endl;
			getline(cin, n);
			book_details[num - 1].setAuthorName(n);
		}
		else if(check == 3)
		{
			string n;
			cout << "Enter the updated Title : " << endl;
			getline(cin, n);
			book_details[num - 1].setBooksTitle(n);
			cout << "Enter the updated author name : " << endl;
			getline(cin, n);
			book_details[num - 1].setAuthorName(n);
		}
		else
		{
			cout << "Error!" << endl;
			return;
		}
	}
	else if (count_Of_Books == 0)
	{
		cout << "Error!" << endl;
		return;
	}
	cout << "Successfully Updated the book " << num  << " details" << endl;
}
void Collection_Of_Books:: displayCountOfBooks()
{
	cout << "Total number of books are : " << count_Of_Books << endl;
}
void Collection_Of_Books::displayBooks() const
{
	if (count_Of_Books > 0)
	{
		cout << "There are total " << count_Of_Books << " book we have!" << endl;
		for (int i = 0; i < count_Of_Books; i++)
		{
			cout << "Book " << i + 1 << " details : " << endl;
			book_details[i].displayBooks();
		}
	}
	else
	{
		cout << "Sorry! we Do not have any books now" << endl;
	}
}
Collection_Of_Books::~Collection_Of_Books()
{
	if (book_details != nullptr)
	{
		delete[] book_details;
		book_details = nullptr;
	}
	if (iD != nullptr)
	{
		delete[] iD;
		iD = nullptr;
	}
}
