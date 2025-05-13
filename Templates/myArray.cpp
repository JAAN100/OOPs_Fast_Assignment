#include <iostream>
#include "myArray.h"
using namespace std;
template <class T>
void myArray<T> :: subScriptError()
{
    cout << "Error invalid input" <<endl;
    exit(0);
}

template <class T>
myArray<T> :: myArray(int a)
{
    arraySize = a;
    aPtr = new T [arraySize]();
}

template <class T>
myArray<T> :: myArray(const myArray& orig)
{
  this->arraySize = orig.arraySize;
  this->aPtr = new T[orig.arraySize]; 
  for (int i = 0; i < arraySize; i++)
  {
    this->aPtr[i] = orig.aPtr[i];
  }s
}

template <class T>
myArray<T> :: ~myArray()
{
    if (aPtr != nullptr)
    {
        delete [] aPtr;
        aPtr = nullptr;
    }
}

template <class T>
T & myArray<T>:: operator[](const int& rhs)
{
    if (rhs < 0 || rhs >= arraySize)
    {
        subScriptError();
    }   
   return aPtr[rhs];   
}