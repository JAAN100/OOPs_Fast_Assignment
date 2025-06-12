#include <iostream>
#include <string>
#include "LIBRARY.h"
using namespace std;
//************************************************
//      Display main 
//************************************************
void displayMain()
{
	cout << "\n\n\t\t\t\t1.Create library initially." << endl;
	cout << "\t\t\t\t2.Update Extra Libraries." << endl;
	cout << "\t\t\t\t3.Delete any Libraries." << endl;
	cout << "\t\t\t\t4.Update new books in any library." << endl;
	cout << "\t\t\t\t5.Create Copies of a single book to other libraries." << endl;
	cout << "\t\t\t\t6.Delete any book from a library." << endl;
	cout << "\t\t\t\t7.Display books in any library." << endl;
	cout << "\t\t\t\t8.Display all books in all libraries." << endl;
	cout << "\t\t\t\t9.Display All Libraries." << endl;
	cout << "\t\t\t\t10.Exit" << endl;
}
//************************************************
//      Set Libraries details in main prototype 
//************************************************
void setForLibrary(Library* L ,int CoL);
//*********************************************************
//      Set extra Libraries details in main prototype 
//*********************************************************
void setExtraLibrary(Library*& L,int& CoL);
//************************************************
//      Set Books details in main Prototype 
//************************************************
void setForBooks(Library* ,int);
//************************************************
//      Libraries details in main prototype 
//************************************************
void updateDetails(Library* ,int&);
//************************************************
//      Delete Libraries details in main prototype 
//************************************************
void deleteAnyLibrary(Library*& , int&);
//************************************************
//      Main Section 
//************************************************
int main()
{
	int count = 0 , CoL = 0;
	Library *L = nullptr;
	while (count != 10)
	{
		displayMain();
		cin >> count;
		switch (count)
		{
		case 1:
			if (L == nullptr)
			{
				cout << "How many libraries are there in your university?";
				cin >> CoL;
				L = new Library[CoL];
				setForLibrary(L, CoL);
			}
			else
			{
				cout << "You have already create the initial libraires." << endl;
			}
			break;
		case 2:
			if (L != nullptr)
			{
				setExtraLibrary(L, CoL);
			}
			else
			{
				cout << "You have to first create the initial library." << endl;
			}
			break;
		case 3:
			if (L != nullptr)
			{
				deleteAnyLibrary(L, CoL);
				cout << "Library deleted succcessfully" << endl;
			}
			else
			{
				cout << "Are you a fool!" << endl;
			}
			break;
		case 4:
			if (L != nullptr)
			{
				int N = 0;
				updateDetails(L, N);
				if (N > 0 && N <= CoL)
				{
					L[N - 1].getupdateBooksDetails();
				}
				else
				{
					cout << "Such library does not exist" << endl;
				}
			}
			else
			{
				cout << "First create a library by pressing 1." << endl;
			}
			break;
		case 5:
			if (L != nullptr)
			{
				int N = 0;
				updateDetails(L, N);
				if (N > 0 && N <= CoL)
				{
					int nBook , nLibrary;
					L[N - 1].getcopyBooksDetails(nBook, nLibrary);
					if (nBook > 0 && nBook <= L[N-1].getCountBooks())
					{
						string title = L[N - 1].getBooksTitle(nBook - 1);
						string name = L[N - 1].getBooksAuthor(nBook - 1);
						if (nLibrary > 0 && nLibrary <= L->getCOL() && nLibrary != N)
						{
							L[nLibrary - 1].copyBooksDetails(title, name);
						}
						else if(nLibrary < 0 && nLibrary != N)
						{

							for (int i = 0; i < L->getCOL(); i++)
							{
								if (i + 1 != N)
								{
									L[i].copyBooksDetails(title , name);
								}
							}
						}
						else
						{
							cout << "Are you a fool?" << endl;
						}
					}
					else
					{
						cout << "Are you fool?" << endl;
					}
				}
				else
				{
					cout << "Such library does not exist" << endl;
				}
			}
			else
			{
				cout << "First create a library by pressing 1." << endl;
			}
			break;
		case 6:
			if (L != nullptr)
			{
				int N;
				updateDetails(L, N);
				if (N > 0 && N <= CoL)
				{
					int num;
					cout << "Books : " << endl;
					L[N - 1].displayBooks();
					cout << "Select which book do you want to delete." << endl;
					cout << "If you want to delete all books enter -ve value." << endl;
					cin >> num;
					L[N - 1].deleteBooksDetails(num);
					cout << "Book Succesfully deleted!" << endl;
				}
				else
				{
					cout << "Are You a Fool!" << endl;
				}
			}
			else
			{
				cout << "First create a library by pressing 1" << endl;
			}
			break;
		case 7:
			if (L != nullptr)
			{
				int N = 0;
				updateDetails(L, N);
				if (N > 0 && N <= CoL)
				{
					L[N - 1].displayBooks();
				}
				else
				{
					cout << "Such library does not exist" << endl;
				}
 			}
			else
			{
				cout << "You do not have any libaray or books in them right know Press 1 to create it." << endl;
			}
			break;
		case 8:
			if (L != nullptr)
			{
				cout << "All books details are here : " << endl;
				cout << "Books Title\t\t\tAuthor Name\t\t\tLibrary Name" << endl;
				for (int i = 0; i < CoL; i++)
				{
					L[i].displayAllBooksDetails(i);
				}
			}
			else
			{
				cout << "You do not have any library know." << endl;
			}
			break;
		case 9:
			if (L != nullptr)
			{
				cout << "There are " << L[0].getCOL() << " libraries in your university." << endl;
				for (int i = 0; i < CoL; i++)
				{
					L[i].display();
				}
			}
			else
			{
				cout << "You do not have any library know." << endl;
			}
			break;
		case 10:
			break;
		default:
			cout << "Choose the correct option." << endl;
			break;
		}
		if (count)
		{
			system("pause");
		}
		system("cls");
	}
	if (L != nullptr)
	{

		delete[] L;
		L = nullptr;
	}
}

//*******************************************
//      Set Libraries details in main 
//*******************************************
void setForLibrary(Library* L , int CoL)
{
	string LD;
	if (L->getCOL() == 0)
	{
		for (int i = 0; i < CoL; i++)
		{
			cin.ignore();
			cout << "Set the name of your Library " << i + 1 << endl;
			getline(cin, LD);
			if (LD == "")
			{
				cout << "PLease enter the correct name:" << endl;
				i--;
				continue;
			}
			L[i].initialSetLibraries(LD);
			setForBooks(L,i);
			L[i].setCOL(CoL);
		}
	}
	else if(L->getCOL() < CoL)
	{
		for (int i = L->getCOL(); i < CoL ; i++)
		{
			cin.ignore();
			cout << "Set the name of your Library " << i + 1 << endl;
			getline(cin, LD);
			L[i].initialSetLibraries(LD);
			setForBooks(L, i);
		}
		for (int i = 0; i < CoL; i++)
		{
			L[i].setCOL(CoL);
		}
	}
}
//*******************************************
//      Set Of Books Details in main
//*******************************************
void setForBooks(Library* L, int N)
{
	int CoB;
	string* Bd = nullptr;
	string* AN = nullptr;
	cout << "How many books are there in " << L[N].getNOL() << endl;
	cin >> CoB;
	if (CoB > 0)
	{
		cin.ignore();
		Bd = new string[CoB];
		AN = new string[CoB];
		for (int i = 0; i < CoB; i++)
		{
			cout << "Enter the title of " << i + 1 << " book : ";
			getline(cin, Bd[i]);
			cin.ignore();
			cout << "Enter author's name of " << Bd[i] << " book : ";
			getline(cin, AN[i]);
		}
		L[N].setBooksDetails(Bd,AN ,CoB);
	}
	else if (CoB == 0)
	{
		L[N].setBooksDetails(nullptr, nullptr,CoB);
	}
	delete[] Bd;
	Bd = nullptr;
}
//*********************************************************
//      Set extra Libraries details in main 
//*********************************************************
void setExtraLibrary(Library*& L, int& CoL)
{
	int newCoL = 0;
	cout << "Enter how many new libraries do you want to create : ";
	cin >> newCoL;
	if (newCoL > 0)
	{
		newCoL += CoL;
		Library* newL = nullptr;
		newL = new Library[newCoL]();
		for (int i = 0; i < CoL; i++)
		{
			newL [i] = L [i];
		}
		delete[]L;
		L = nullptr;
		L = new Library[newCoL]();
		for (int i = 0; i < CoL; i++)
		{
			L [i] = newL [i];
		}
		delete[]newL;
		newL = nullptr;
		CoL = newCoL;
		setForLibrary(L, CoL);
	}
	else if(newCoL <= 0)
	{
		cout << "Why are you testing my patience?" << endl;
	}
}
//************************************************
//      Libraries details in main prototype 
//************************************************
void updateDetails(Library* L,int& num)
{
cout << "There are " << L->getCOL() << " librarries" << endl;
	for (int i = 0; i < L->getCOL(); i++)
	{
		cout << i + 1 << ". " << L[i].getNOL() << endl;
	}
	cout << "In which library you want to go " << endl;
	cin >> num;
}
//************************************************
//      Delete Libraries details in main prototype 
//************************************************
void deleteAnyLibrary(Library*& L, int& CoL)
{
	int n;
	cout << "Libraries: " << endl;
	for (int i = 0; i < CoL; i++)
	{
		cout << i + 1 << ". " << L[i].getNOL() << endl;
	}
	cout << "If you wanted to delete all the libraries enter -ve number." << endl;
	cout << "Which libray do you want to delete enter : " << endl;
	cin >> n;
	if (n > 0)
		{
			Library* CL = new Library[CoL];
			for (int i = 0; i < CoL; i++)
			{
				if (i != n - 1)
				{
					CL[i] = L[i];
				}
				else
				{
					CL[i] = Library::Library();
				}
			}
			delete[] L;
			L = nullptr;
			L = new Library[CoL - 1];
			for (int i = 0; i < CoL - 1; i++)
			{
				if (i >= (n - 1))
				{
					L[i] = CL[i + 1];
					L[i].setCOL(CoL - 1);
				}
				else
				{
					L[i] = CL[i];
					L[i].setCOL(CoL - 1);
				}
			}
			delete[] CL;
			CL = nullptr;
			CoL -= 1;
	}
	else if(L != nullptr || n < 0)
	{
		delete[] L;
		L = nullptr;
		CoL = 0;
	}
}