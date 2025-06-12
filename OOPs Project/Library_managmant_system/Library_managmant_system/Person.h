#ifndef  PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
private:
	string assistantLibrarian;
	string libraryHead;
public:
//*******************************************
//      Default Constructor Of Person
//*******************************************
	Person() {}
//*******************************************
//      Overloaded Constructor Of Person
//*******************************************
	Person(string A, string H) : assistantLibrarian(A), libraryHead(H){}
//*******************************************
//      Copy Constructor Of Person
//*******************************************
	Person(const Person& orig) : assistantLibrarian(orig.assistantLibrarian), libraryHead(orig.libraryHead){}
//*******************************************
//      Assignment Operator Of Person
//*******************************************
	const Person& operator=(const Person& rhs)
	{
		if (this != &rhs)
		{
			assistantLibrarian= rhs.assistantLibrarian;
			libraryHead = rhs.libraryHead;
		}
		return *this;
	}
//*******************************************
//      Destructor Of Person
//*******************************************

	~Person() {}
};
#endif // ! PERSON_H
