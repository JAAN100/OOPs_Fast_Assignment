#include <iostream>
#include "Collection_Of_Books.h"
using namespace std;
void displayMenu()
{
	cout << "\n\t\t\tBooks Menu" << endl;
	cout << "\t\t\t1.Add Books" << endl;
	cout << "\t\t\t2.Delete Any Book Detail" << endl;
	cout << "\t\t\t3.Update Books Details" << endl;
	cout << "\t\t\t4.Display All Books" << endl;
	cout << "\t\t\t5.Exit" << endl;
}
int main()
{
	Collection_Of_Books b;
	int n = 0;
	while (n != 5)
	{
		displayMenu();
		cout << "Enter Your Option ! " << endl;
		cin >> n;
		switch (n)
		{
		case 1:
			b.infoAddOfBooks();
			break;
		case 2:
			int N;
			b.displayCountOfBooks();
			cout << "Which Book do you want to delete? " << endl;
			cin >> N;
			b.deleteBookInfo(N);
			break;
		case 3:
			b.displayCountOfBooks();
			cout << "Which Book details do you want to Updated? " << endl;
			cin >> N;
			b.updateBookInfo(N);
			break;
		case 4:
			b.displayBooks();
			break;
		case 5:
			break;
		default:
			cout << "There is no such service available!" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
}